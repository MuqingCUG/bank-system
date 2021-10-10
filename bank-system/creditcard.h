#ifndef CREDITCARD_H
#define CREDITCARD_H

#include <QWidget>
#include"user.h"
#include<QDate>

namespace Ui {
class CreditCard;
}

class CreditCard : public QWidget
{
    Q_OBJECT

public:
    explicit CreditCard(QWidget *parent = nullptr);
    ~CreditCard();

private slots:
    void on_Cardnumber_textChanged();

    void on_Name_textChanged();

    void on_ID_textChanged();

    void on_Address_textChanged();

    void on_Dialnumber_textChanged();

    void on_Passwd_textChanged();

    void on_overdraft_textChanged();

    void on_save_clicked();

    void on_exit_clicked();

private:
    Ui::CreditCard *ui;

    User*  credit_user;

    QDateTime u_time;//获取注册信用卡的日期
    uint time;
};

#endif // CREDITCARD_H
