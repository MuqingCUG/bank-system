/********************************************************************************
** Form generated from reading UI file 'deposit.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSIT_H
#define UI_DEPOSIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Deposit
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QTextEdit *text_Deposit;
    QPushButton *pushButton;

    void setupUi(QWidget *Deposit)
    {
        if (Deposit->objectName().isEmpty())
            Deposit->setObjectName(QString::fromUtf8("Deposit"));
        Deposit->resize(400, 300);
        widget = new QWidget(Deposit);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(70, 70, 301, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        text_Deposit = new QTextEdit(widget);
        text_Deposit->setObjectName(QString::fromUtf8("text_Deposit"));

        horizontalLayout->addWidget(text_Deposit);

        pushButton = new QPushButton(Deposit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 150, 113, 32));

        retranslateUi(Deposit);

        QMetaObject::connectSlotsByName(Deposit);
    } // setupUi

    void retranslateUi(QWidget *Deposit)
    {
        Deposit->setWindowTitle(QCoreApplication::translate("Deposit", "Form", nullptr));
        label->setText(QCoreApplication::translate("Deposit", "\345\255\230\346\254\276", nullptr));
        pushButton->setText(QCoreApplication::translate("Deposit", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Deposit: public Ui_Deposit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSIT_H
