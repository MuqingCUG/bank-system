#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include<QWidget>
#include<QDebug>
#include "reform.h"

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    this->setWindowTitle("银行登录界面");
    QString StrWidth,StrHeigth;
    QString filename=":/login/bank.jpg";
    QImage* img=new QImage,* scaledimg=new QImage;//分别保存原图和缩放之后的图片
    if(! ( img->load(filename) ) ) //加载图像
    {
        QMessageBox::information(this,
                                 tr("打开图像失败"),
                                 tr("打开图像失败!"));
        delete img;
        return;
    }
    int Owidth=img->width(),Oheight=img->height();
    int Fwidth,Fheight;       //缩放后的图片大小
    ui->label->setGeometry(0,0,424,119);
    int Mul;            //记录图片与label大小的比例，用于缩放图片
    if(Owidth/400>=Oheight/300)
        Mul=Owidth/400;
    else
        Mul=Oheight/300;
    Fwidth=Owidth/Mul;
    Fheight=Oheight/Mul;
    *scaledimg=img->scaled(Fwidth,Fheight,Qt::KeepAspectRatio);
    ui->label->setPixmap(QPixmap::fromImage(*scaledimg));
}

Login::~Login()
{
    delete ui;
}



void Login::on_u_register_clicked()
{
    qDebug() << "注册开户" ;
    u_register = new Reform();
    u_register->show();
}

void Login::on_login_clicked()
{
    qDebug() << "用户登录" ;
    u_user = new Verify();
    u_user->show();
}

void Login::on_creditcard_clicked()
{
    qDebug() << "信用卡账户开户" ;
    u_creditcard = new CreditCard();
    u_creditcard->show();
}

void Login::on_exit_clicked()
{
    this->close();
}


