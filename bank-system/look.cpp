#include "look.h"
#include "ui_look.h"
#include<string>
#include<QMessageBox>
#include<QDateTime>
#include<QDebug>
Look::Look(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Look)
{
    ui->setupUi(this);
    this->setWindowTitle("流水信息");
}

Look::~Look()
{
    delete ui;
}

void Look::on_pushButton_clicked()
{
    string str1,str2;
    strstream ss;
    ss<<Look_user.Accout;
    ss>>str2;
    string frist="Record"+str2 +".html";
    const char *RecordFile=frist.c_str();
    ifstream infile(RecordFile,ios::in);
    if(!infile)
    {
        QMessageBox::warning(this,"warning","没有历史记录");
    }
    while(!infile.eof())
    {
        getline (infile,str1);
        QString str = QString::fromStdString(str1);
        ui->history_Browser->append(str);
    }
    double U_insterst = Look_user.Interst;
    qDebug() <<"当前所获利息 ："<<Look_user.Interst;
    string str3 = to_string(U_insterst);

    QDateTime time = QDateTime::currentDateTime();
    QString u_time =  time.toString("yyyy-MM-dd ddd hh:mm");
    string u_time_2 = u_time.toStdString();

    string str4 = u_time_2 + "\t\t当前利息：" + str3;
    QString str = QString::fromStdString(str4);
    ui->history_Browser->append(str);
}

void Look::set_user(User& u)
{
    qDebug() <<"当前所获利息 ："<<u.Interst;
    Look_user = u;
    qDebug() <<"开户存款时间："<<Look_user.day1 ;
    qDebug() <<"当前登录时间："<<Look_user.day2 ;
    qDebug() <<"共计存款时间："<<Look_user.DAY ;
    qDebug() <<"当前所获利息 ："<<Look_user.Interst;

}
void Look::on_pushButton_2_clicked()
{
    this->close();
}
