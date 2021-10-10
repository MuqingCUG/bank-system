/********************************************************************************
** Form generated from reading UI file 'verify.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERIFY_H
#define UI_VERIFY_H

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

class Ui_Verify
{
public:
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QTextEdit *text_cardnumber;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *text_Passwd;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Verify)
    {
        if (Verify->objectName().isEmpty())
            Verify->setObjectName(QString::fromUtf8("Verify"));
        Verify->resize(433, 300);
        widget_3 = new QWidget(Verify);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(20, 40, 391, 81));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(widget_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(87, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        text_cardnumber = new QTextEdit(widget);
        text_cardnumber->setObjectName(QString::fromUtf8("text_cardnumber"));

        horizontalLayout->addWidget(text_cardnumber);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(87, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        text_Passwd = new QTextEdit(widget_2);
        text_Passwd->setObjectName(QString::fromUtf8("text_Passwd"));

        horizontalLayout_2->addWidget(text_Passwd);


        verticalLayout->addWidget(widget_2);

        widget_4 = new QWidget(Verify);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(30, 180, 331, 44));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton = new QPushButton(widget_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton_2 = new QPushButton(widget_4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);


        retranslateUi(Verify);

        QMetaObject::connectSlotsByName(Verify);
    } // setupUi

    void retranslateUi(QWidget *Verify)
    {
        Verify->setWindowTitle(QCoreApplication::translate("Verify", "Form", nullptr));
        label->setText(QCoreApplication::translate("Verify", "\345\215\241\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("Verify", "\345\257\206\347\240\201", nullptr));
        pushButton->setText(QCoreApplication::translate("Verify", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Verify", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Verify: public Ui_Verify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERIFY_H
