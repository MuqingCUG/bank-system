/********************************************************************************
** Form generated from reading UI file 'check.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECK_H
#define UI_CHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Check
{
public:
    QTextBrowser *moneyBrowser;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Check)
    {
        if (Check->objectName().isEmpty())
            Check->setObjectName(QString::fromUtf8("Check"));
        Check->resize(583, 444);
        moneyBrowser = new QTextBrowser(Check);
        moneyBrowser->setObjectName(QString::fromUtf8("moneyBrowser"));
        moneyBrowser->setGeometry(QRect(20, 20, 541, 241));
        widget = new QWidget(Check);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(120, 310, 331, 41));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(Check);

        QMetaObject::connectSlotsByName(Check);
    } // setupUi

    void retranslateUi(QWidget *Check)
    {
        Check->setWindowTitle(QCoreApplication::translate("Check", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Check", "\346\237\245\347\234\213", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Check", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Check: public Ui_Check {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECK_H
