#include "verify.h"
#include "ui_verify.h"
#include<fstream>
#include<strstream>
#include<QMessageBox>
#include<QDebug>

Verify::Verify(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Verify)
{
    ui->setupUi(this);
    this->setWindowTitle("登录");
    u_time =  QDateTime::currentDateTime();
    time = u_time.toTime_t();
    u_user.day2 = time;
    //qDebug() <<"当前时间："<<time ;
}

Verify::~Verify()
{
    delete ui;
}

void Verify::on_pushButton_2_clicked()
{
    this->hide();
}

void Verify::on_pushButton_clicked()
{
    QString  str1 = ui->text_cardnumber->toPlainText();
    std::string filename = str1.toStdString();

    QString  str2 = ui->text_Passwd->toPlainText();
    std::string Passwd = str2.toStdString();

    bool flag = u_user.Login(filename,Passwd);
    if(flag)
    {
        double interst = u_user.set_interst();
        u_function = new MainWindow();
        u_function->set_user(u_user);
        u_function->show();
    }
    else
    {
       QMessageBox::warning(this,"warning","输入密码错误或账户不存在！！！");
    }
}

//qDebug() <<"开户存款时间："<<u_user.day1 ;
//qDebug() <<"当前登录时间："<<u_user.day2 ;
//qDebug() <<"共计存款时间："<<u_user.DAY ;
//qDebug() <<"当前所获利息 ："<<u_user.Interst <<"\t"<<interst;
