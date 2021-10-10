#include "deposit.h"
#include "ui_deposit.h"
#include<QDebug>
#include<QDateTime>
#include<QString>
Deposit::Deposit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Deposit)
{
    ui->setupUi(this);
    this->setWindowTitle("存款");
}

Deposit::~Deposit()
{
    delete ui;
}

void Deposit::set_user(User& u)
{
    Depo_user = u;
}

void Deposit::on_pushButton_clicked()
{
    QString  str = ui->text_Deposit->toPlainText();
    int saveMoney = str.toInt();
    Depo_user.Deposit_Money(saveMoney);

    string acco = Depo_user.Accout;
    QString readString = QString::fromStdString(acco);
    qDebug("readString = %s",qPrintable(readString));
    Depo_user.SaveFile();
    string str1("\t\t存款 RMB  钞 + ");
    string str2 /*= Depo_user.Accout*/;
    strstream ss;
    ss<<Depo_user.Accout;
    ss>>str2;

    string frist="Record"+str2 +".html";

    QDateTime time = QDateTime::currentDateTime();
    QString u_time =  time.toString("yyyy-MM-dd ddd hh:mm");
    string u_time_2 = u_time.toStdString();

    const char *RecordFile=frist.c_str();
    ofstream outfile(RecordFile,ios::out|ios::app);
    outfile<<u_time_2<<str1<<saveMoney<<endl;
    outfile.close();
    outfile.clear();
    this->close();

}
