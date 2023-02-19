/********************************************************************************
** Form generated from reading UI file 'AdminGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINGUI_H
#define UI_ADMINGUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminGUI
{
public:
    QStackedWidget *AdminInterface;
    QWidget *UserList;
    QTableWidget *userList;
    QPushButton *deleteUserBtn;
    QLabel *userListErrorLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *userListTab;
    QPushButton *restaurantListTab;
    QPushButton *profileTab;
    QPushButton *statsTab;
    QPushButton *logoutTab;
    QWidget *RestaurantList;
    QLabel *createRestaurantLabel;
    QFrame *line;
    QTableWidget *restaurantList;
    QPushButton *deleteRestaurantBtn;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *userListTab_2;
    QPushButton *restaurantListTab_2;
    QPushButton *profileTab_2;
    QPushButton *statsTab_2;
    QPushButton *logoutTab_2;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLabel *restaurantNameLabel;
    QLineEdit *restaurantName;
    QLabel *nameErrorLabel;
    QLabel *restaurantAddLabel;
    QLineEdit *restaurantAdd;
    QLabel *addressErrorLabel;
    QLabel *restaurantPhoneLabel;
    QLineEdit *restaurantPhone;
    QLabel *phoneErrorLabel;
    QLabel *restaurantEmailLabel;
    QLineEdit *restaurantEmail;
    QLabel *emailErrorLabel;
    QLabel *restaurantPswLabel;
    QLineEdit *restaurantPsw;
    QLabel *pswErrorLabel;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_2;
    QLabel *createRestaurantError;
    QPushButton *createRestaurantBtn;
    QLabel *deleteRestaurantLabel;
    QLabel *label_6;
    QWidget *Profile;
    QLabel *label;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *userListTab_3;
    QPushButton *restaurantListTab_3;
    QPushButton *profileTab_3;
    QPushButton *statsTab_3;
    QPushButton *logoutTab_3;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_3;
    QLabel *emailProfileLabel;
    QLineEdit *emailLineEdit;
    QLabel *emailProfileErrorLabel;
    QLabel *pswProfileLabel;
    QLineEdit *pswLineEdit;
    QLabel *pswProfileErrorLabel;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_4;
    QLabel *updateProfileError;
    QPushButton *updateProfileBtn;
    QWidget *Stats;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *userListTab_4;
    QPushButton *restaurantListTab_4;
    QPushButton *profileTab_4;
    QPushButton *statsTab_4;
    QPushButton *logoutTab_4;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *plotOrdersForHour;
    QLabel *plotAge;
    QWidget *layoutWidget8;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *TotalOrderLabel;
    QLineEdit *TotalOrderLineEdit;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_8;
    QLabel *dailyOrdersLabel;
    QLineEdit *dailyOrdersLineEdit;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *TotalsLabel;
    QLineEdit *TotalsLineEdit;
    QFrame *line_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *TotalCustomerLabel;
    QLineEdit *TotalCustomerLineEdit;
    QFrame *line_7;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_9;
    QLabel *bestCustomerLabel;
    QLineEdit *bestCustomerLineEdit;
    QFrame *line_5;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_8;
    QLineEdit *bestCustomerOfMonthEdit;
    QFrame *line_6;
    QVBoxLayout *verticalLayout_10;
    QLabel *topgrossingLabel;
    QLineEdit *topgrossingLineEdit;

    void setupUi(QDialog *AdminGUI)
    {
        if (AdminGUI->objectName().isEmpty())
            AdminGUI->setObjectName(QString::fromUtf8("AdminGUI"));
        AdminGUI->resize(800, 630);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        AdminGUI->setWindowIcon(icon);
        AdminInterface = new QStackedWidget(AdminGUI);
        AdminInterface->setObjectName(QString::fromUtf8("AdminInterface"));
        AdminInterface->setGeometry(QRect(10, 10, 781, 611));
        UserList = new QWidget();
        UserList->setObjectName(QString::fromUtf8("UserList"));
        userList = new QTableWidget(UserList);
        if (userList->columnCount() < 6)
            userList->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        userList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        userList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        userList->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        userList->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        userList->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        userList->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        userList->setObjectName(QString::fromUtf8("userList"));
        userList->setGeometry(QRect(0, 50, 781, 521));
        deleteUserBtn = new QPushButton(UserList);
        deleteUserBtn->setObjectName(QString::fromUtf8("deleteUserBtn"));
        deleteUserBtn->setGeometry(QRect(610, 580, 171, 28));
        userListErrorLabel = new QLabel(UserList);
        userListErrorLabel->setObjectName(QString::fromUtf8("userListErrorLabel"));
        userListErrorLabel->setGeometry(QRect(420, 580, 191, 31));
        layoutWidget = new QWidget(UserList);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 781, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        userListTab = new QPushButton(layoutWidget);
        userListTab->setObjectName(QString::fromUtf8("userListTab"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        userListTab->setFont(font);
        userListTab->setAutoDefault(false);
        userListTab->setFlat(true);

        horizontalLayout->addWidget(userListTab);

        restaurantListTab = new QPushButton(layoutWidget);
        restaurantListTab->setObjectName(QString::fromUtf8("restaurantListTab"));

        horizontalLayout->addWidget(restaurantListTab);

        profileTab = new QPushButton(layoutWidget);
        profileTab->setObjectName(QString::fromUtf8("profileTab"));

        horizontalLayout->addWidget(profileTab);

        statsTab = new QPushButton(layoutWidget);
        statsTab->setObjectName(QString::fromUtf8("statsTab"));

        horizontalLayout->addWidget(statsTab);

        logoutTab = new QPushButton(layoutWidget);
        logoutTab->setObjectName(QString::fromUtf8("logoutTab"));

        horizontalLayout->addWidget(logoutTab);

        AdminInterface->addWidget(UserList);
        RestaurantList = new QWidget();
        RestaurantList->setObjectName(QString::fromUtf8("RestaurantList"));
        createRestaurantLabel = new QLabel(RestaurantList);
        createRestaurantLabel->setObjectName(QString::fromUtf8("createRestaurantLabel"));
        createRestaurantLabel->setGeometry(QRect(20, 80, 361, 31));
        QFont font1;
        font1.setPointSize(20);
        createRestaurantLabel->setFont(font1);
        line = new QFrame(RestaurantList);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(380, 50, 20, 541));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        restaurantList = new QTableWidget(RestaurantList);
        if (restaurantList->columnCount() < 4)
            restaurantList->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        restaurantList->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        restaurantList->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        restaurantList->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        restaurantList->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        restaurantList->setObjectName(QString::fromUtf8("restaurantList"));
        restaurantList->setGeometry(QRect(390, 50, 391, 491));
        deleteRestaurantBtn = new QPushButton(RestaurantList);
        deleteRestaurantBtn->setObjectName(QString::fromUtf8("deleteRestaurantBtn"));
        deleteRestaurantBtn->setGeometry(QRect(390, 570, 391, 28));
        layoutWidget1 = new QWidget(RestaurantList);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 10, 781, 30));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        userListTab_2 = new QPushButton(layoutWidget1);
        userListTab_2->setObjectName(QString::fromUtf8("userListTab_2"));

        horizontalLayout_2->addWidget(userListTab_2);

        restaurantListTab_2 = new QPushButton(layoutWidget1);
        restaurantListTab_2->setObjectName(QString::fromUtf8("restaurantListTab_2"));
        restaurantListTab_2->setFont(font);
        restaurantListTab_2->setAutoDefault(false);
        restaurantListTab_2->setFlat(true);

        horizontalLayout_2->addWidget(restaurantListTab_2);

        profileTab_2 = new QPushButton(layoutWidget1);
        profileTab_2->setObjectName(QString::fromUtf8("profileTab_2"));

        horizontalLayout_2->addWidget(profileTab_2);

        statsTab_2 = new QPushButton(layoutWidget1);
        statsTab_2->setObjectName(QString::fromUtf8("statsTab_2"));

        horizontalLayout_2->addWidget(statsTab_2);

        logoutTab_2 = new QPushButton(layoutWidget1);
        logoutTab_2->setObjectName(QString::fromUtf8("logoutTab_2"));

        horizontalLayout_2->addWidget(logoutTab_2);

        layoutWidget2 = new QWidget(RestaurantList);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 130, 201, 380));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        restaurantNameLabel = new QLabel(layoutWidget2);
        restaurantNameLabel->setObjectName(QString::fromUtf8("restaurantNameLabel"));

        verticalLayout->addWidget(restaurantNameLabel);

        restaurantName = new QLineEdit(layoutWidget2);
        restaurantName->setObjectName(QString::fromUtf8("restaurantName"));

        verticalLayout->addWidget(restaurantName);

        nameErrorLabel = new QLabel(layoutWidget2);
        nameErrorLabel->setObjectName(QString::fromUtf8("nameErrorLabel"));
        nameErrorLabel->setFont(font);

        verticalLayout->addWidget(nameErrorLabel);

        restaurantAddLabel = new QLabel(layoutWidget2);
        restaurantAddLabel->setObjectName(QString::fromUtf8("restaurantAddLabel"));

        verticalLayout->addWidget(restaurantAddLabel);

        restaurantAdd = new QLineEdit(layoutWidget2);
        restaurantAdd->setObjectName(QString::fromUtf8("restaurantAdd"));

        verticalLayout->addWidget(restaurantAdd);

        addressErrorLabel = new QLabel(layoutWidget2);
        addressErrorLabel->setObjectName(QString::fromUtf8("addressErrorLabel"));
        addressErrorLabel->setFont(font);

        verticalLayout->addWidget(addressErrorLabel);

        restaurantPhoneLabel = new QLabel(layoutWidget2);
        restaurantPhoneLabel->setObjectName(QString::fromUtf8("restaurantPhoneLabel"));

        verticalLayout->addWidget(restaurantPhoneLabel);

        restaurantPhone = new QLineEdit(layoutWidget2);
        restaurantPhone->setObjectName(QString::fromUtf8("restaurantPhone"));

        verticalLayout->addWidget(restaurantPhone);

        phoneErrorLabel = new QLabel(layoutWidget2);
        phoneErrorLabel->setObjectName(QString::fromUtf8("phoneErrorLabel"));
        phoneErrorLabel->setFont(font);

        verticalLayout->addWidget(phoneErrorLabel);

        restaurantEmailLabel = new QLabel(layoutWidget2);
        restaurantEmailLabel->setObjectName(QString::fromUtf8("restaurantEmailLabel"));

        verticalLayout->addWidget(restaurantEmailLabel);

        restaurantEmail = new QLineEdit(layoutWidget2);
        restaurantEmail->setObjectName(QString::fromUtf8("restaurantEmail"));

        verticalLayout->addWidget(restaurantEmail);

        emailErrorLabel = new QLabel(layoutWidget2);
        emailErrorLabel->setObjectName(QString::fromUtf8("emailErrorLabel"));
        emailErrorLabel->setFont(font);

        verticalLayout->addWidget(emailErrorLabel);

        restaurantPswLabel = new QLabel(layoutWidget2);
        restaurantPswLabel->setObjectName(QString::fromUtf8("restaurantPswLabel"));

        verticalLayout->addWidget(restaurantPswLabel);

        restaurantPsw = new QLineEdit(layoutWidget2);
        restaurantPsw->setObjectName(QString::fromUtf8("restaurantPsw"));
        restaurantPsw->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(restaurantPsw);

        pswErrorLabel = new QLabel(layoutWidget2);
        pswErrorLabel->setObjectName(QString::fromUtf8("pswErrorLabel"));
        pswErrorLabel->setFont(font);

        verticalLayout->addWidget(pswErrorLabel);

        layoutWidget3 = new QWidget(RestaurantList);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 520, 371, 53));
        verticalLayout_2 = new QVBoxLayout(layoutWidget3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        createRestaurantError = new QLabel(layoutWidget3);
        createRestaurantError->setObjectName(QString::fromUtf8("createRestaurantError"));

        verticalLayout_2->addWidget(createRestaurantError);

        createRestaurantBtn = new QPushButton(layoutWidget3);
        createRestaurantBtn->setObjectName(QString::fromUtf8("createRestaurantBtn"));

        verticalLayout_2->addWidget(createRestaurantBtn);

        deleteRestaurantLabel = new QLabel(RestaurantList);
        deleteRestaurantLabel->setObjectName(QString::fromUtf8("deleteRestaurantLabel"));
        deleteRestaurantLabel->setGeometry(QRect(400, 550, 371, 20));
        label_6 = new QLabel(RestaurantList);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 530, 55, 16));
        label_6->setFont(font);
        AdminInterface->addWidget(RestaurantList);
        Profile = new QWidget();
        Profile->setObjectName(QString::fromUtf8("Profile"));
        label = new QLabel(Profile);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 70, 171, 31));
        label->setFont(font1);
        layoutWidget4 = new QWidget(Profile);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(0, 10, 781, 30));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        userListTab_3 = new QPushButton(layoutWidget4);
        userListTab_3->setObjectName(QString::fromUtf8("userListTab_3"));

        horizontalLayout_3->addWidget(userListTab_3);

        restaurantListTab_3 = new QPushButton(layoutWidget4);
        restaurantListTab_3->setObjectName(QString::fromUtf8("restaurantListTab_3"));

        horizontalLayout_3->addWidget(restaurantListTab_3);

        profileTab_3 = new QPushButton(layoutWidget4);
        profileTab_3->setObjectName(QString::fromUtf8("profileTab_3"));
        profileTab_3->setFont(font);
        profileTab_3->setAutoDefault(false);
        profileTab_3->setFlat(true);

        horizontalLayout_3->addWidget(profileTab_3);

        statsTab_3 = new QPushButton(layoutWidget4);
        statsTab_3->setObjectName(QString::fromUtf8("statsTab_3"));

        horizontalLayout_3->addWidget(statsTab_3);

        logoutTab_3 = new QPushButton(layoutWidget4);
        logoutTab_3->setObjectName(QString::fromUtf8("logoutTab_3"));

        horizontalLayout_3->addWidget(logoutTab_3);

        layoutWidget5 = new QWidget(Profile);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(270, 130, 261, 149));
        verticalLayout_3 = new QVBoxLayout(layoutWidget5);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        emailProfileLabel = new QLabel(layoutWidget5);
        emailProfileLabel->setObjectName(QString::fromUtf8("emailProfileLabel"));

        verticalLayout_3->addWidget(emailProfileLabel);

        emailLineEdit = new QLineEdit(layoutWidget5);
        emailLineEdit->setObjectName(QString::fromUtf8("emailLineEdit"));

        verticalLayout_3->addWidget(emailLineEdit);

        emailProfileErrorLabel = new QLabel(layoutWidget5);
        emailProfileErrorLabel->setObjectName(QString::fromUtf8("emailProfileErrorLabel"));
        emailProfileErrorLabel->setFont(font);

        verticalLayout_3->addWidget(emailProfileErrorLabel);

        pswProfileLabel = new QLabel(layoutWidget5);
        pswProfileLabel->setObjectName(QString::fromUtf8("pswProfileLabel"));

        verticalLayout_3->addWidget(pswProfileLabel);

        pswLineEdit = new QLineEdit(layoutWidget5);
        pswLineEdit->setObjectName(QString::fromUtf8("pswLineEdit"));
        pswLineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(pswLineEdit);

        pswProfileErrorLabel = new QLabel(layoutWidget5);
        pswProfileErrorLabel->setObjectName(QString::fromUtf8("pswProfileErrorLabel"));
        pswProfileErrorLabel->setFont(font);

        verticalLayout_3->addWidget(pswProfileErrorLabel);

        layoutWidget6 = new QWidget(Profile);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(230, 360, 341, 53));
        verticalLayout_4 = new QVBoxLayout(layoutWidget6);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        updateProfileError = new QLabel(layoutWidget6);
        updateProfileError->setObjectName(QString::fromUtf8("updateProfileError"));

        verticalLayout_4->addWidget(updateProfileError);

        updateProfileBtn = new QPushButton(layoutWidget6);
        updateProfileBtn->setObjectName(QString::fromUtf8("updateProfileBtn"));

        verticalLayout_4->addWidget(updateProfileBtn);

        AdminInterface->addWidget(Profile);
        Stats = new QWidget();
        Stats->setObjectName(QString::fromUtf8("Stats"));
        layoutWidget7 = new QWidget(Stats);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(0, 10, 781, 30));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        userListTab_4 = new QPushButton(layoutWidget7);
        userListTab_4->setObjectName(QString::fromUtf8("userListTab_4"));

        horizontalLayout_4->addWidget(userListTab_4);

        restaurantListTab_4 = new QPushButton(layoutWidget7);
        restaurantListTab_4->setObjectName(QString::fromUtf8("restaurantListTab_4"));

        horizontalLayout_4->addWidget(restaurantListTab_4);

        profileTab_4 = new QPushButton(layoutWidget7);
        profileTab_4->setObjectName(QString::fromUtf8("profileTab_4"));

        horizontalLayout_4->addWidget(profileTab_4);

        statsTab_4 = new QPushButton(layoutWidget7);
        statsTab_4->setObjectName(QString::fromUtf8("statsTab_4"));
        statsTab_4->setFont(font);
        statsTab_4->setAutoDefault(false);
        statsTab_4->setFlat(true);

        horizontalLayout_4->addWidget(statsTab_4);

        logoutTab_4 = new QPushButton(layoutWidget7);
        logoutTab_4->setObjectName(QString::fromUtf8("logoutTab_4"));

        horizontalLayout_4->addWidget(logoutTab_4);

        label_10 = new QLabel(Stats);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(130, 480, 101, 21));
        label_11 = new QLabel(Stats);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(510, 480, 161, 16));
        plotOrdersForHour = new QLabel(Stats);
        plotOrdersForHour->setObjectName(QString::fromUtf8("plotOrdersForHour"));
        plotOrdersForHour->setGeometry(QRect(0, 190, 391, 281));
        plotOrdersForHour->setFrameShape(QFrame::Box);
        plotAge = new QLabel(Stats);
        plotAge->setObjectName(QString::fromUtf8("plotAge"));
        plotAge->setGeometry(QRect(400, 190, 381, 281));
        plotAge->setFrameShape(QFrame::Box);
        layoutWidget8 = new QWidget(Stats);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(0, 60, 781, 121));
        verticalLayout_12 = new QVBoxLayout(layoutWidget8);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        TotalOrderLabel = new QLabel(layoutWidget8);
        TotalOrderLabel->setObjectName(QString::fromUtf8("TotalOrderLabel"));

        verticalLayout_6->addWidget(TotalOrderLabel);

        TotalOrderLineEdit = new QLineEdit(layoutWidget8);
        TotalOrderLineEdit->setObjectName(QString::fromUtf8("TotalOrderLineEdit"));
        TotalOrderLineEdit->setEnabled(false);

        verticalLayout_6->addWidget(TotalOrderLineEdit);


        horizontalLayout_5->addLayout(verticalLayout_6);

        line_2 = new QFrame(layoutWidget8);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line_2);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        dailyOrdersLabel = new QLabel(layoutWidget8);
        dailyOrdersLabel->setObjectName(QString::fromUtf8("dailyOrdersLabel"));

        verticalLayout_8->addWidget(dailyOrdersLabel);

        dailyOrdersLineEdit = new QLineEdit(layoutWidget8);
        dailyOrdersLineEdit->setObjectName(QString::fromUtf8("dailyOrdersLineEdit"));
        dailyOrdersLineEdit->setEnabled(false);

        verticalLayout_8->addWidget(dailyOrdersLineEdit);


        horizontalLayout_5->addLayout(verticalLayout_8);

        line_3 = new QFrame(layoutWidget8);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line_3);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        TotalsLabel = new QLabel(layoutWidget8);
        TotalsLabel->setObjectName(QString::fromUtf8("TotalsLabel"));

        verticalLayout_7->addWidget(TotalsLabel);

        TotalsLineEdit = new QLineEdit(layoutWidget8);
        TotalsLineEdit->setObjectName(QString::fromUtf8("TotalsLineEdit"));
        TotalsLineEdit->setEnabled(false);

        verticalLayout_7->addWidget(TotalsLineEdit);


        horizontalLayout_5->addLayout(verticalLayout_7);

        line_4 = new QFrame(layoutWidget8);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        TotalCustomerLabel = new QLabel(layoutWidget8);
        TotalCustomerLabel->setObjectName(QString::fromUtf8("TotalCustomerLabel"));

        verticalLayout_5->addWidget(TotalCustomerLabel);

        TotalCustomerLineEdit = new QLineEdit(layoutWidget8);
        TotalCustomerLineEdit->setObjectName(QString::fromUtf8("TotalCustomerLineEdit"));
        TotalCustomerLineEdit->setEnabled(false);

        verticalLayout_5->addWidget(TotalCustomerLineEdit);


        horizontalLayout_5->addLayout(verticalLayout_5);


        verticalLayout_12->addLayout(horizontalLayout_5);

        line_7 = new QFrame(layoutWidget8);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_12->addWidget(line_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        bestCustomerLabel = new QLabel(layoutWidget8);
        bestCustomerLabel->setObjectName(QString::fromUtf8("bestCustomerLabel"));

        verticalLayout_9->addWidget(bestCustomerLabel);

        bestCustomerLineEdit = new QLineEdit(layoutWidget8);
        bestCustomerLineEdit->setObjectName(QString::fromUtf8("bestCustomerLineEdit"));
        bestCustomerLineEdit->setEnabled(false);

        verticalLayout_9->addWidget(bestCustomerLineEdit);


        horizontalLayout_6->addLayout(verticalLayout_9);

        line_5 = new QFrame(layoutWidget8);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(line_5);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_8 = new QLabel(layoutWidget8);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_11->addWidget(label_8);

        bestCustomerOfMonthEdit = new QLineEdit(layoutWidget8);
        bestCustomerOfMonthEdit->setObjectName(QString::fromUtf8("bestCustomerOfMonthEdit"));
        bestCustomerOfMonthEdit->setEnabled(false);

        verticalLayout_11->addWidget(bestCustomerOfMonthEdit);


        horizontalLayout_6->addLayout(verticalLayout_11);

        line_6 = new QFrame(layoutWidget8);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(line_6);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        topgrossingLabel = new QLabel(layoutWidget8);
        topgrossingLabel->setObjectName(QString::fromUtf8("topgrossingLabel"));
        topgrossingLabel->setEnabled(true);

        verticalLayout_10->addWidget(topgrossingLabel);

        topgrossingLineEdit = new QLineEdit(layoutWidget8);
        topgrossingLineEdit->setObjectName(QString::fromUtf8("topgrossingLineEdit"));
        topgrossingLineEdit->setEnabled(false);

        verticalLayout_10->addWidget(topgrossingLineEdit);


        horizontalLayout_6->addLayout(verticalLayout_10);


        verticalLayout_12->addLayout(horizontalLayout_6);

        AdminInterface->addWidget(Stats);

        retranslateUi(AdminGUI);

        AdminInterface->setCurrentIndex(3);
        userListTab->setDefault(true);
        restaurantListTab_2->setDefault(true);
        profileTab_3->setDefault(true);
        statsTab_4->setDefault(true);


        QMetaObject::connectSlotsByName(AdminGUI);
    } // setupUi

    void retranslateUi(QDialog *AdminGUI)
    {
        AdminGUI->setWindowTitle(QCoreApplication::translate("AdminGUI", "AdminGUI", nullptr));
        QTableWidgetItem *___qtablewidgetitem = userList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("AdminGUI", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = userList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("AdminGUI", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = userList->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("AdminGUI", "Surname", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = userList->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("AdminGUI", "Email", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = userList->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("AdminGUI", "Phone", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = userList->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("AdminGUI", "Balance", nullptr));
        deleteUserBtn->setText(QCoreApplication::translate("AdminGUI", "Delete selected user", nullptr));
        userListErrorLabel->setText(QString());
        userListTab->setText(QCoreApplication::translate("AdminGUI", "User List", nullptr));
        restaurantListTab->setText(QCoreApplication::translate("AdminGUI", "Restaurant List", nullptr));
        profileTab->setText(QCoreApplication::translate("AdminGUI", "Profile", nullptr));
        statsTab->setText(QCoreApplication::translate("AdminGUI", "Stats", nullptr));
        logoutTab->setText(QCoreApplication::translate("AdminGUI", "Logout", nullptr));
        createRestaurantLabel->setText(QCoreApplication::translate("AdminGUI", "Create a new restaurant", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = restaurantList->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("AdminGUI", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = restaurantList->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("AdminGUI", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = restaurantList->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("AdminGUI", "Address", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = restaurantList->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("AdminGUI", "Phone", nullptr));
        deleteRestaurantBtn->setText(QCoreApplication::translate("AdminGUI", "Delete selected restaurant", nullptr));
        userListTab_2->setText(QCoreApplication::translate("AdminGUI", "User List", nullptr));
        restaurantListTab_2->setText(QCoreApplication::translate("AdminGUI", "Restaurant List", nullptr));
        profileTab_2->setText(QCoreApplication::translate("AdminGUI", "Profile", nullptr));
        statsTab_2->setText(QCoreApplication::translate("AdminGUI", "Stats", nullptr));
        logoutTab_2->setText(QCoreApplication::translate("AdminGUI", "Logout", nullptr));
        restaurantNameLabel->setText(QCoreApplication::translate("AdminGUI", "Name", nullptr));
        nameErrorLabel->setText(QString());
        restaurantAddLabel->setText(QCoreApplication::translate("AdminGUI", "Address", nullptr));
        addressErrorLabel->setText(QString());
        restaurantPhoneLabel->setText(QCoreApplication::translate("AdminGUI", "Phone", nullptr));
        phoneErrorLabel->setText(QString());
        restaurantEmailLabel->setText(QCoreApplication::translate("AdminGUI", "Email", nullptr));
        emailErrorLabel->setText(QString());
        restaurantPswLabel->setText(QCoreApplication::translate("AdminGUI", "Password", nullptr));
        pswErrorLabel->setText(QString());
        createRestaurantError->setText(QString());
        createRestaurantBtn->setText(QCoreApplication::translate("AdminGUI", "Create restaurant", nullptr));
        deleteRestaurantLabel->setText(QString());
        label_6->setText(QString());
        label->setText(QCoreApplication::translate("AdminGUI", "Your Profile", nullptr));
        userListTab_3->setText(QCoreApplication::translate("AdminGUI", "User List", nullptr));
        restaurantListTab_3->setText(QCoreApplication::translate("AdminGUI", "Restaurant List", nullptr));
        profileTab_3->setText(QCoreApplication::translate("AdminGUI", "Profile", nullptr));
        statsTab_3->setText(QCoreApplication::translate("AdminGUI", "Stats", nullptr));
        logoutTab_3->setText(QCoreApplication::translate("AdminGUI", "Logout", nullptr));
        emailProfileLabel->setText(QCoreApplication::translate("AdminGUI", "Email", nullptr));
        emailProfileErrorLabel->setText(QString());
        pswProfileLabel->setText(QCoreApplication::translate("AdminGUI", "Password", nullptr));
        pswProfileErrorLabel->setText(QString());
        updateProfileError->setText(QString());
        updateProfileBtn->setText(QCoreApplication::translate("AdminGUI", "Update data", nullptr));
        userListTab_4->setText(QCoreApplication::translate("AdminGUI", "User List", nullptr));
        restaurantListTab_4->setText(QCoreApplication::translate("AdminGUI", "Restaurant List", nullptr));
        profileTab_4->setText(QCoreApplication::translate("AdminGUI", "Profile", nullptr));
        statsTab_4->setText(QCoreApplication::translate("AdminGUI", "Stats", nullptr));
        logoutTab_4->setText(QCoreApplication::translate("AdminGUI", "Logout", nullptr));
        label_10->setText(QCoreApplication::translate("AdminGUI", "Orders for hours", nullptr));
        label_11->setText(QCoreApplication::translate("AdminGUI", "Average age of customers", nullptr));
        plotOrdersForHour->setText(QString());
        plotAge->setText(QString());
        TotalOrderLabel->setText(QCoreApplication::translate("AdminGUI", "Number of orders placed", nullptr));
        dailyOrdersLabel->setText(QCoreApplication::translate("AdminGUI", "Average of daily orders", nullptr));
        TotalsLabel->setText(QCoreApplication::translate("AdminGUI", "Total revenue", nullptr));
        TotalCustomerLabel->setText(QCoreApplication::translate("AdminGUI", "Number of customers", nullptr));
        bestCustomerLabel->setText(QCoreApplication::translate("AdminGUI", "Best customer", nullptr));
        label_8->setText(QCoreApplication::translate("AdminGUI", "Best customer of month", nullptr));
        topgrossingLabel->setText(QCoreApplication::translate("AdminGUI", "Highest grossing restaurant", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminGUI: public Ui_AdminGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINGUI_H
