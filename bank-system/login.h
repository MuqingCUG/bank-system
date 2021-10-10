#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QImage>
#include <QPixmap>
#include <QPainter>
#include <QString>
#include"user.h"
#include "reform.h"
#include"verify.h"
#include"creditcard.h"
#include<QPushButton>
#include<QWidget>
namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_u_register_clicked();

    void on_login_clicked();

    void on_exit_clicked();

    void on_creditcard_clicked();

private:
    Ui::Login *ui;
    Verify* u_user;
    Reform* u_register;
    CreditCard* u_creditcard;

};

#endif // LOGIN_H
