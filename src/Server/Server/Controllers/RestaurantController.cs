﻿using Microsoft.AspNetCore.Authorization;
using Microsoft.AspNetCore.Http;
using Microsoft.AspNetCore.Mvc;
using MongoDB.Driver;
using Server.Models;
using System.Text.RegularExpressions;

namespace Server.Controllers
{
    [Route("api/restaurant")]
    [ApiController]
    public class RestaurantController : ControllerBase
    {
        private readonly IConfiguration _configuration;
        public RestaurantController(IConfiguration configuration)
        {
            _configuration = configuration;
        }

        /*
         * API /restaurant/all
         * Return all restaurants
         */
        [Route("all")]
        [HttpGet]
        [AllowAnonymous]
        public IActionResult Get()
        {
            try
            {
                MongoClient dbClient = new MongoClient(_configuration.GetConnectionString("DinerHubConn"));

                var dbList = dbClient.GetDatabase("dinerhub").GetCollection<Restaurant>("Restaurant").AsQueryable();

                return Ok(dbList);
            }
            catch (Exception ex)
            {
                Console.WriteLine("Internal Server Error: ", ex.Message);
                return new StatusCodeResult(StatusCodes.Status500InternalServerError);
            }
        }

        /*
         * API /restaurant/:id
         * Return the restaurant with the specified id
         */
        [HttpGet("{id}")]
        [AllowAnonymous]
        public IActionResult Get(int id)
        {
            try
            {
                if (Regex.IsMatch(id.ToString(), _configuration["Regex:Id"]))
                {
                    MongoClient dbClient = new MongoClient(_configuration.GetConnectionString("DinerHubConn"));

                    var filter = Builders<Restaurant>.Filter.Eq("RestaurantId", id);

                    var collection = dbClient.GetDatabase("dinerhub").GetCollection<Restaurant>("Restaurant");
                    var dbList = collection.Find(filter).FirstOrDefault();

                    // Hide password
                    dbList.Psw = "";

                    return Ok(dbList);
                }
                else
                {
                    return BadRequest("One or more validation errors occurred.");
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine("Internal Server Error: ", ex.Message);
                return new StatusCodeResult(StatusCodes.Status500InternalServerError);
            }
        }

        /*
         * API /restaurant/create
         * Insert a new restaurant
         */
        [Route("create")]
        [HttpPost]
        [Authorize(Roles = "ADMIN")]
        public IActionResult Post(Restaurant restaurant)
        {
            try
            {
                if (Regex.IsMatch(restaurant.Name.ToString(), _configuration["Regex:RestaurantName"])
                    && Regex.IsMatch(restaurant.Address.ToString(), _configuration["Regex:Address"])
                    && Regex.IsMatch(restaurant.Phone.ToString(), _configuration["Regex:Phone"])
                    && Regex.IsMatch(restaurant.Email.ToString().ToLower(), _configuration["Regex:Email"])
                    )
                {
                    MongoClient dbClient = new MongoClient(_configuration.GetConnectionString("DinerHubConn"));

                    // Email must be unique
                    var filterEmailRestaurant = Builders<Restaurant>.Filter.Eq("Email", restaurant.Email);
                    var collectionRestaurant = dbClient.GetDatabase("dinerhub").GetCollection<Restaurant>("Restaurant");
                    var dbListRestaurant = collectionRestaurant.Find(filterEmailRestaurant).FirstOrDefault();

                    var filterEmailUser = Builders<User>.Filter.Eq("Email", restaurant.Email);
                    var collectionUser = dbClient.GetDatabase("dinerhub").GetCollection<User>("User");
                    var dbListUser = collectionUser.Find(filterEmailUser).FirstOrDefault();

                    if (dbListRestaurant == null && dbListUser == null)
                    {
                        // Get last element and create a new id for the new user
                        var dbRestaurantList = dbClient.GetDatabase("dinerhub").GetCollection<Restaurant>("Restaurant").AsQueryable().ToList();
                        int LastRestaurantId = dbRestaurantList.Count > 0 ? dbRestaurantList.Last().RestaurantId : 0;
                        restaurant.RestaurantId = LastRestaurantId + 1;

                        restaurant.Email = restaurant.Email.ToLower();

                        dbClient.GetDatabase("dinerhub").GetCollection<Restaurant>("Restaurant").InsertOne(restaurant);

                        return Ok("Restaurant added successfully!");
                    }
                    else
                    {
                        return BadRequest("Email already in use!");
                    }

                }
                else
                {
                    return BadRequest("One or more validation errors occurred.");
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine("Internal Server Error: ", ex.Message);
                return new StatusCodeResult(StatusCodes.Status500InternalServerError);
            }
        }

        /*
         * API /restaurant/update
         * Update restaurant information
         */
        [Route("update")]
        [HttpPut]
        [Authorize(Roles = "ADMIN, RESTAURANT")]
        public IActionResult Put(Restaurant restaurant)
        {
            try
            {
                    if (Regex.IsMatch(restaurant.Name.ToString(), _configuration["Regex:RestaurantName"])
                        && Regex.IsMatch(restaurant.Address.ToString(), _configuration["Regex:Address"])
                        && Regex.IsMatch(restaurant.Phone.ToString(), _configuration["Regex:Phone"])
                        && Regex.IsMatch(restaurant.Email.ToString().ToLower(), _configuration["Regex:Email"])
                        )
                    {
                        MongoClient dbClient = new MongoClient(_configuration.GetConnectionString("DinerHubConn"));

                        var filter = Builders<Restaurant>.Filter.Eq("RestaurantId", restaurant.RestaurantId);

                        var collection = dbClient.GetDatabase("dinerhub").GetCollection<Restaurant>("Restaurant");
                        var dbList = collection.Find(filter).FirstOrDefault();

                    if (dbList != null)
                    {
                        // Email must be unique
                        var filterEmailRestaurant = Builders<Restaurant>.Filter.Eq("Email", restaurant.Email);
                        var filterIdRestaurant = Builders<Restaurant>.Filter.Ne("RestaurantId", restaurant.RestaurantId);

                        var combineFiltersEmail = Builders<Restaurant>.Filter.And(filterEmailRestaurant, filterIdRestaurant);

                        var collectionRestaurant = dbClient.GetDatabase("dinerhub").GetCollection<Restaurant>("Restaurant");
                        var dbListRestaurant = collectionRestaurant.Find(combineFiltersEmail).FirstOrDefault();

                        if (dbListRestaurant == null)
                        {
                            var update = Builders<Restaurant>.Update.Set("Name", restaurant.Name)
                                                                .Set("Address", restaurant.Address)
                                                                .Set("Phone", restaurant.Phone)
                                                                .Set("Email", restaurant.Email)
                                                                .Set("Psw", restaurant.Psw)
                                                                .Set("IsRestaurant", true);     // Cannot override IsRestaurant

                            dbClient.GetDatabase("dinerhub").GetCollection<Restaurant>("Restaurant").UpdateOne(filter, update);

                            return Ok("Update Successfully");
                        }
                        else
                        {
                            return BadRequest(dbListRestaurant);
                        }
                    }
                    else
                    {
                        return Ok("No restaurant found with this ID!");
                    }
                }
                else
                {
                    return BadRequest("One or more validation errors occurred.");
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine("Internal Server Error: ", ex.Message);
                return new StatusCodeResult(StatusCodes.Status500InternalServerError);
            }
        }

        /*
         * API /restaurant/delete/:id
         * Delete a restaurant
         */
        [Route("delete/{id:int}")]
        [HttpDelete]
        [Authorize(Roles = "ADMIN")]
        public IActionResult Delete(int id)
        {
            try
            {
                if (Regex.IsMatch(id.ToString(), _configuration["Regex:Id"]))
                {
                    MongoClient dbClient = new MongoClient(_configuration.GetConnectionString("DinerHubConn"));

                    var filter = Builders<Restaurant>.Filter.Eq("RestaurantId", id);

                    var collection = dbClient.GetDatabase("dinerhub").GetCollection<Restaurant>("Restaurant");
                    var dbList = collection.Find(filter).FirstOrDefault();

                    if (dbList != null)
                    {
                        dbClient.GetDatabase("dinerhub").GetCollection<Restaurant>("Restaurant").DeleteOne(filter);

                        return Ok("Deleted Successfully");
                    }
                    else
                    {
                        return Ok("No restaurant found with this ID!");
                    }
                }
                else
                {
                    return BadRequest("One or more validation errors occurred.");
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine("Internal Server Error: ", ex.Message);
                return new StatusCodeResult(StatusCodes.Status500InternalServerError);
            }
        }
    }
}
