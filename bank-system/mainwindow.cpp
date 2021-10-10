#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QtDebug>
#include <QMessageBox>
#include<QWidget>
#include<QDebug>
#include"draw.h"
#include"deposit.h"
#include"check.h"
#include"look.h"
#include"formation.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("主要功能");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::set_user(User& u)
{
    Main_user = u;
    qDebug() <<"开户存款时间："<<Main_user.day1 ;
    qDebug() <<"当前登录时间："<<Main_user.day2 ;
    qDebug() <<"共计存款时间："<<Main_user.DAY ;
    qDebug() <<"当前所获利息 ："<<Main_user.Interst;
}

void MainWindow::on_pushButton_clicked()
{
   Deposit* u_deposit;
   u_deposit = new Deposit;
   u_deposit->set_user(Main_user);
   u_deposit->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    Draw* u_draw;
    u_draw = new Draw();
    u_draw->set_user(Main_user);
    u_draw->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    Check* u_check;
    u_check = new Check;
    u_check->set_user(Main_user);
    u_check->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    Look* u_look;
    u_look = new Look;
    u_look->set_user(Main_user);
    u_look->show();
}

void MainWindow::on_pushButton_5_clicked()
{
    this->close();
}

void MainWindow::on_pushButton_6_clicked()
{
    Formation* u_formation;
    u_formation = new Formation;
    u_formation->set_user(Main_user);
    u_formation->show();
}
