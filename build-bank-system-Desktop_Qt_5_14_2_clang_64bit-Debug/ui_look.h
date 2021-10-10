/********************************************************************************
** Form generated from reading UI file 'look.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOOK_H
#define UI_LOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Look
{
public:
    QTextBrowser *history_Browser;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Look)
    {
        if (Look->objectName().isEmpty())
            Look->setObjectName(QString::fromUtf8("Look"));
        Look->resize(647, 425);
        history_Browser = new QTextBrowser(Look);
        history_Browser->setObjectName(QString::fromUtf8("history_Browser"));
        history_Browser->setGeometry(QRect(20, 20, 611, 261));
        widget = new QWidget(Look);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(130, 320, 361, 38));
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


        retranslateUi(Look);

        QMetaObject::connectSlotsByName(Look);
    } // setupUi

    void retranslateUi(QWidget *Look)
    {
        Look->setWindowTitle(QCoreApplication::translate("Look", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Look", "\346\237\245\347\234\213", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Look", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Look: public Ui_Look {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOOK_H
