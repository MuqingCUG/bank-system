#include "reform.h"
#include "ui_reform.h"
#include<cstring>
#include<string.h>
#include"user.h"

Reform::Reform(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Reform)
{
    ui->setupUi(this);
    this->setWindowTitle("新用户开户");
    u_user = new User;
    u_time =  QDateTime::currentDateTime();
    time = u_time.toTime_t();
    u_user->day1 = time;
}

Reform::~Reform()
{
    delete ui;
}

void Reform::on_exit_clicked()
{
    this->close();
}


void Reform::on_Cardnumber_textChanged()
{
     QString  str = ui->Cardnumber->toPlainText();
     std::string str1 = str.toStdString();   
     u_user->set_Account(str1);
}

void Reform::on_Name_textChanged()
{
    QString  str = ui->Name->toPlainText();
    std::string str1 = str.toStdString();
    u_user->set_Name(str1);
}


void Reform::on_ID_textChanged()
{
    QString  str = ui->ID->toPlainText();
    std::string str1 = str.toStdString();
    u_user->set_ID(str1);
}

void Reform::on_Address_textChanged()
{
    QString  str = ui->Address->toPlainText();
    std::string str1 = str.toStdString();
    u_user->set_Address(str1);
}

void Reform::on_Dialnumber_textChanged()
{
    QString  str = ui->Dialnumber->toPlainText();
    std::string str1 = str.toStdString();
    u_user->set_Telephone(str1);
}

void Reform::on_Passwd_textChanged()
{
    QString  str = ui->Passwd->toPlainText();
    std::string str1 = str.toStdString();
    u_user->set_Password(str1);
}

void Reform::on_Money_textChanged()
{
    QString  str = ui->Money->toPlainText();
    int str1 = str.toInt();
    u_user->set_Fmoney(str1);
}

void Reform::on_save_clicked()
{
    u_user->SaveFile_2();
    this->close();
}
