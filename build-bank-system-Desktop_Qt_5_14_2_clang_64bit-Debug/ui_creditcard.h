/********************************************************************************
** Form generated from reading UI file 'creditcard.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITCARD_H
#define UI_CREDITCARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreditCard
{
public:
    QWidget *widget_6;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QTextEdit *Cardnumber;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *Name;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QTextEdit *ID;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QTextEdit *Address;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QTextEdit *Dialnumber;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_6;
    QTextEdit *Passwd;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_7;
    QTextEdit *overdraft;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *save;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *exit;

    void setupUi(QWidget *CreditCard)
    {
        if (CreditCard->objectName().isEmpty())
            CreditCard->setObjectName(QString::fromUtf8("CreditCard"));
        CreditCard->resize(697, 541);
        widget_6 = new QWidget(CreditCard);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(80, 30, 471, 321));
        verticalLayout = new QVBoxLayout(widget_6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(widget_6);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Cardnumber = new QTextEdit(widget);
        Cardnumber->setObjectName(QString::fromUtf8("Cardnumber"));

        horizontalLayout->addWidget(Cardnumber);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_6);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        Name = new QTextEdit(widget_2);
        Name->setObjectName(QString::fromUtf8("Name"));

        horizontalLayout_2->addWidget(Name);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(widget_6);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(true);

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        ID = new QTextEdit(widget_3);
        ID->setObjectName(QString::fromUtf8("ID"));

        horizontalLayout_3->addWidget(ID);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(widget_6);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        Address = new QTextEdit(widget_4);
        Address->setObjectName(QString::fromUtf8("Address"));

        horizontalLayout_4->addWidget(Address);


        verticalLayout->addWidget(widget_4);

        widget_5 = new QWidget(widget_6);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        Dialnumber = new QTextEdit(widget_5);
        Dialnumber->setObjectName(QString::fromUtf8("Dialnumber"));

        horizontalLayout_5->addWidget(Dialnumber);


        verticalLayout->addWidget(widget_5);

        widget_7 = new QWidget(widget_6);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_6 = new QHBoxLayout(widget_7);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget_7);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        Passwd = new QTextEdit(widget_7);
        Passwd->setObjectName(QString::fromUtf8("Passwd"));

        horizontalLayout_6->addWidget(Passwd);


        verticalLayout->addWidget(widget_7);

        widget_8 = new QWidget(widget_6);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        horizontalLayout_7 = new QHBoxLayout(widget_8);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget_8);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        overdraft = new QTextEdit(widget_8);
        overdraft->setObjectName(QString::fromUtf8("overdraft"));

        horizontalLayout_7->addWidget(overdraft);


        verticalLayout->addWidget(widget_8);

        widget_9 = new QWidget(CreditCard);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setGeometry(QRect(70, 390, 381, 44));
        horizontalLayout_8 = new QHBoxLayout(widget_9);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        save = new QPushButton(widget_9);
        save->setObjectName(QString::fromUtf8("save"));

        horizontalLayout_8->addWidget(save);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        exit = new QPushButton(widget_9);
        exit->setObjectName(QString::fromUtf8("exit"));

        horizontalLayout_8->addWidget(exit);


        retranslateUi(CreditCard);

        QMetaObject::connectSlotsByName(CreditCard);
    } // setupUi

    void retranslateUi(QWidget *CreditCard)
    {
        CreditCard->setWindowTitle(QCoreApplication::translate("CreditCard", "Form", nullptr));
        label->setText(QCoreApplication::translate("CreditCard", "\345\215\241\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("CreditCard", "\345\247\223\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("CreditCard", "\350\272\253\344\273\275\350\257\201\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("CreditCard", "\345\234\260\345\235\200", nullptr));
        label_5->setText(QCoreApplication::translate("CreditCard", "\347\224\265\350\257\235", nullptr));
        label_6->setText(QCoreApplication::translate("CreditCard", "\345\257\206\347\240\201", nullptr));
        label_7->setText(QCoreApplication::translate("CreditCard", "\351\200\217\346\224\257\351\207\221\351\242\235", nullptr));
        save->setText(QCoreApplication::translate("CreditCard", "\344\277\235\345\255\230", nullptr));
        exit->setText(QCoreApplication::translate("CreditCard", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreditCard: public Ui_CreditCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITCARD_H
