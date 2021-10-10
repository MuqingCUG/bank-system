#ifndef REFORM_H
#define REFORM_H

#include <QWidget>
#include"user.h"
#include<QDate>

namespace Ui {
class Reform;
}

class Reform : public QWidget
{
    Q_OBJECT

public:
    explicit Reform(QWidget *parent = nullptr);
    ~Reform();

private slots:
    void on_exit_clicked();

    void on_Cardnumber_textChanged();

    void on_Name_textChanged();

    void on_ID_textChanged();

    void on_Address_textChanged();

    void on_Dialnumber_textChanged();

    void on_Passwd_textChanged();

    void on_Money_textChanged();

    void on_save_clicked();

private:
    Ui::Reform *ui;
    User* u_user;
    QDateTime u_time;//获取注册开户的日期
    uint time;
};

#endif // REFORM_H
