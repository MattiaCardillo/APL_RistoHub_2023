/********************************************************************************
** Form generated from reading UI file 'Client.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientClass
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *emailLabel;
    QLineEdit *emailField;
    QLabel *emailError;
    QHBoxLayout *horizontalLayout_3;
    QLabel *pswLabel;
    QLineEdit *pswField;
    QLabel *pswError;
    QLabel *ristoHubName;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *loginButton;
    QPushButton *registerButton;

    void setupUi(QWidget *ClientClass)
    {
        if (ClientClass->objectName().isEmpty())
            ClientClass->setObjectName(QString::fromUtf8("ClientClass"));
        ClientClass->resize(350, 400);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        ClientClass->setWindowIcon(icon);
        layoutWidget = new QWidget(ClientClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 160, 311, 151));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));

        horizontalLayout->addLayout(horizontalLayout_2);

        emailLabel = new QLabel(layoutWidget);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));

        horizontalLayout->addWidget(emailLabel);

        emailField = new QLineEdit(layoutWidget);
        emailField->setObjectName(QString::fromUtf8("emailField"));

        horizontalLayout->addWidget(emailField);


        verticalLayout->addLayout(horizontalLayout);

        emailError = new QLabel(layoutWidget);
        emailError->setObjectName(QString::fromUtf8("emailError"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        emailError->setFont(font);

        verticalLayout->addWidget(emailError);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pswLabel = new QLabel(layoutWidget);
        pswLabel->setObjectName(QString::fromUtf8("pswLabel"));

        horizontalLayout_3->addWidget(pswLabel);

        pswField = new QLineEdit(layoutWidget);
        pswField->setObjectName(QString::fromUtf8("pswField"));
        pswField->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(pswField);


        verticalLayout->addLayout(horizontalLayout_3);

        pswError = new QLabel(layoutWidget);
        pswError->setObjectName(QString::fromUtf8("pswError"));
        pswError->setFont(font);

        verticalLayout->addWidget(pswError);

        ristoHubName = new QLabel(ClientClass);
        ristoHubName->setObjectName(QString::fromUtf8("ristoHubName"));
        ristoHubName->setGeometry(QRect(120, 80, 121, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Courier"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        ristoHubName->setFont(font1);
        layoutWidget1 = new QWidget(ClientClass);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 320, 311, 65));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        loginButton = new QPushButton(layoutWidget1);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));

        verticalLayout_2->addWidget(loginButton);

        registerButton = new QPushButton(layoutWidget1);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));

        verticalLayout_2->addWidget(registerButton);


        retranslateUi(ClientClass);

        QMetaObject::connectSlotsByName(ClientClass);
    } // setupUi

    void retranslateUi(QWidget *ClientClass)
    {
        ClientClass->setWindowTitle(QCoreApplication::translate("ClientClass", "Client", nullptr));
        emailLabel->setText(QCoreApplication::translate("ClientClass", "Email", nullptr));
        emailError->setText(QString());
        pswLabel->setText(QCoreApplication::translate("ClientClass", "Password", nullptr));
        pswError->setText(QString());
        ristoHubName->setText(QCoreApplication::translate("ClientClass", "DinerHub", nullptr));
        loginButton->setText(QCoreApplication::translate("ClientClass", "LOGIN", nullptr));
        registerButton->setText(QCoreApplication::translate("ClientClass", "Not registered yet? Create an account!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientClass: public Ui_ClientClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
