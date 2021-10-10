#ifndef VERIFY_H
#define VERIFY_H

#include <QWidget>
#include"mainwindow.h"
#include"user.h"
#include<QDate>

namespace Ui {
class Verify;
}

class Verify : public QWidget
{
    Q_OBJECT

public:
    explicit Verify(QWidget *parent = nullptr);
    ~Verify();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Verify *ui;
    MainWindow* u_function;
    User u_user;
    QDateTime u_time;//获取登录的日期
    uint time;
};

#endif // VERIFY_H
