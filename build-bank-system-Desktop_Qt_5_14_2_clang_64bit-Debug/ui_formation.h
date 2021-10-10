/********************************************************************************
** Form generated from reading UI file 'formation.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMATION_H
#define UI_FORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Formation
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QTextBrowser *account_Browser;

    void setupUi(QWidget *Formation)
    {
        if (Formation->objectName().isEmpty())
            Formation->setObjectName(QString::fromUtf8("Formation"));
        Formation->resize(665, 464);
        widget = new QWidget(Formation);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(130, 350, 361, 38));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        account_Browser = new QTextBrowser(Formation);
        account_Browser->setObjectName(QString::fromUtf8("account_Browser"));
        account_Browser->setGeometry(QRect(20, 50, 611, 261));

        retranslateUi(Formation);

        QMetaObject::connectSlotsByName(Formation);
    } // setupUi

    void retranslateUi(QWidget *Formation)
    {
        Formation->setWindowTitle(QCoreApplication::translate("Formation", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Formation", "\346\237\245\347\234\213", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Formation", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Formation: public Ui_Formation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMATION_H
