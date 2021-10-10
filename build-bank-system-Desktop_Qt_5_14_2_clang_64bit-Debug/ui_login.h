/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *login;
    QPushButton *u_register;
    QPushButton *creditcard;
    QPushButton *exit;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(426, 300);
        Login->setMinimumSize(QSize(426, 300));
        Login->setMaximumSize(QSize(852, 600));
        label = new QLabel(Login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 110, 16, 16));
        label->setMaximumSize(QSize(42400, 11900));
        widget = new QWidget(Login);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 160, 311, 101));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        login = new QPushButton(widget);
        login->setObjectName(QString::fromUtf8("login"));

        verticalLayout->addWidget(login);

        u_register = new QPushButton(widget);
        u_register->setObjectName(QString::fromUtf8("u_register"));

        verticalLayout->addWidget(u_register);

        creditcard = new QPushButton(widget);
        creditcard->setObjectName(QString::fromUtf8("creditcard"));

        verticalLayout->addWidget(creditcard);

        exit = new QPushButton(widget);
        exit->setObjectName(QString::fromUtf8("exit"));

        verticalLayout->addWidget(exit);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Form", nullptr));
        label->setText(QString());
        login->setText(QCoreApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        u_register->setText(QCoreApplication::translate("Login", "\346\263\250\345\206\214\345\202\250\350\223\204\345\215\241", nullptr));
        creditcard->setText(QCoreApplication::translate("Login", "\346\263\250\345\206\214\344\277\241\347\224\250\345\215\241", nullptr));
        exit->setText(QCoreApplication::translate("Login", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
