#include "creditcard.h"
#include "ui_creditcard.h"
#include<string.h>
#include<QString>

CreditCard::CreditCard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreditCard)
{
    ui->setupUi(this);
    this->setWindowTitle("信用卡账户注册");
    credit_user = new User;
    u_time =  QDateTime::currentDateTime();
    time = u_time.toTime_t();
    credit_user->day1 = time;
}

CreditCard::~CreditCard()
{
    delete ui;
}

void CreditCard::on_Cardnumber_textChanged()
{
    QString  str = ui->Cardnumber->toPlainText();
    std::string str1 = str.toStdString();
    credit_user->set_Account(str1);
}

void CreditCard::on_Name_textChanged()
{
    QString  str = ui->Name->toPlainText();
    std::string str1 = str.toStdString();
    credit_user->set_Name(str1);
}

void CreditCard::on_ID_textChanged()
{
    QString  str = ui->ID->toPlainText();
    std::string str1 = str.toStdString();
    credit_user->set_ID(str1);
}

void CreditCard::on_Address_textChanged()
{
    QString  str = ui->Address->toPlainText();
    std::string str1 = str.toStdString();
    credit_user->set_Address(str1);
}

void CreditCard::on_Dialnumber_textChanged()
{
    QString  str = ui->Dialnumber->toPlainText();
    std::string str1 = str.toStdString();
    credit_user->set_Telephone(str1);
}

void CreditCard::on_Passwd_textChanged()
{
    QString  str = ui->Passwd->toPlainText();
    std::string str1 = str.toStdString();
    credit_user->set_Password(str1);
}

void CreditCard::on_overdraft_textChanged()
{
    QString  str = ui->overdraft->toPlainText();
    int str1 = str.toInt();
    credit_user->set_Overdraft(str1);
}

void CreditCard::on_save_clicked()
{
    credit_user->SaveFile_3();
    this->close();
}

void CreditCard::on_exit_clicked()
{
    this->close();
}
