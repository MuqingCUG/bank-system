#include "check.h"
#include "ui_check.h"
#include<QFile>
#include<string>
#include<QMessageBox>
#include<QTextStream>
#include<QDateTime>
Check::Check(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Check)
{
    ui->setupUi(this);
    this->setWindowTitle("余额");
}

Check::~Check()
{
    delete ui;
}

void Check::on_pushButton_clicked()
{
    int money = Check_user.Fmoney;
    string s = std::to_string(money);

    QDateTime time = QDateTime::currentDateTime();
    QString u_time =  time.toString("yyyy-MM-dd ddd hh:mm");
    string u_time_2 = u_time.toStdString();

    string str=u_time_2+"\t\t余额"+s;
    QString U_Fmoney = QString::fromStdString(str);
    ui->moneyBrowser->append(U_Fmoney);

}

void Check::set_user(User& u)
{
    Check_user = u;
}

//QFile file("file.html");
//if(!file.open(QFile::ReadOnly | QFile::Text))
//    qDebug() << "Can not open";
//QTextStream in(&file);
//licenceTextBrowser->setHtml(in.readAll());



void Check::on_pushButton_2_clicked()
{
    this->close();
}

//    string str1,str2;
//    strstream ss;
//    ss<<Check_user.Accout;
//    ss>>str2;
//    string frist="Record"+str2 +".txt";
//    const char *RecordFile=frist.c_str();
//    ifstream infile(RecordFile,ios::in);
//    if(!infile)
//    {
//        QMessageBox::warning(this,"warning","没有历史记录");
//    }
//    while(!infile.eof())
//    {
//        getline (infile,str1);
//        QString str = QString::fromStdString(str1);
//        ui->moneyBrowser->append(str);
//    }
//    QString filename = QString::fromStdString(frist);
//    QFile file(filename);
//    if(!file.open(QFile::ReadOnly | QFile::Text))
//    {
//        QMessageBox::warning(this,"warning","没有历史记录");
//    }
//    else
//    {
//        QTextStream in(&file);
//        ui->moneyBrowser->setHtml(in.readAll());
//        //licenceTextBrowser->setHtml(in.readAll());
//    }
