#include"user.h"
#include<fstream>
#include<QDateTime>
#include<QString>
//设置银行卡号
void User::set_Account(string account)
{
    this->Accout = account;
}
//设置姓名
void User::set_Name(string name)
{
    this->Name = name;
}
//设置余额
void User::set_Fmoney(int money)
{
    this->Fmoney = money;
}
//设置身份证号
void User::set_ID(string id)
{
    this->ID = id;
}
//设置地址
void User::set_Address(string address)
{
    this->Address = address;
}
//设置电话
void User::set_Telephone(string T_number)
{
    this->Telephone = T_number;
}
void User::set_Password(string password)
{
    this->Password = password;
}
//设置信用卡额度
void User::set_Overdraft(int number)
{
    this->overdraft = number;
}
bool User::Login(string acc,string pwd)
{
    string filename=acc;
    string frist;
    //string last(".txt");
    string last(".html");
    strstream ss;
    ss<<filename;
    ss>>frist;
    frist+=last;
    const char *UserID=frist.c_str();
    ifstream  infile(UserID,ios::in  );

    infile >> this->Accout >> this->Name >> this->Fmoney
            >> this->ID >> this->Address >> this->Telephone
            >> this->Password >> this->day1;

    if (this->Accout  == acc && this->Password == pwd)
    {
        return true;
    }
    else
        return false;
}
void User::SaveFile()
{
    string filename=this->Accout;
    string frist;
    string last(".html");
    strstream ss;
    ss<<filename;
    ss>>frist;
    frist+=last;
    const char *UserID=frist.c_str();
    ofstream outfile(UserID,ios::out |ios::trunc );
    outfile<<Accout<<' '<<Name<<' '<<Fmoney<<' '<<ID<<' '<<Address<<' '<<Telephone<<' '<<Password<<' '<<day1<<endl;
    outfile.close();
}

void User::SaveFile_2()
{
    string filename=this->Accout;
    string frist;
    string last(".html");
    strstream ss;
    ss<<filename;
    ss>>frist;
    frist+=last;
    const char *UserID=frist.c_str();
    ofstream outfile(UserID,ios::out |ios::trunc );
    outfile<<Accout<<' '<<Name<<' '<<Fmoney<<' '<<ID<<' '<<Address<<' '<<Telephone<<' '<<Password<<' '<<day1<<endl;
    outfile.close();

    QDateTime time = QDateTime::currentDateTime();
    QString u_time =  time.toString("yyyy-MM-dd ddd hh:mm");
    string u_time_2 = u_time.toStdString();

    string str1("\t\t开户存款 RMB  钞 + ");
    string str2 ;
    strstream ss1;
    ss1<<filename;
    ss1>>str2;

    string frist1="Record"+str2 +".html";
    const char *RecordFile=frist1.c_str();
    ofstream outfile1(RecordFile,ios::out|ios::app);
    outfile1<<u_time_2<<str1<<Fmoney<<endl;
}

void User::SaveFile_3()//信用卡账户
{
    string fileTitle = "CreditCard";

    string filename= fileTitle +this->Accout;
    string frist;
    string last(".html");
    strstream ss;
    ss<<filename;
    ss>>frist;
    frist+=last;
    const char *UserID=frist.c_str();
    ofstream outfile(UserID,ios::out |ios::trunc );
    outfile<<Accout<<' '<<Name<<' '<<overdraft<<' '<<ID<<' '<<Address<<' '<<Telephone<<' '<<Password<<' '<<day1<<endl;
    outfile.close();

    QDateTime time = QDateTime::currentDateTime();
    QString u_time =  time.toString("yyyy-MM-dd ddd hh:mm");
    string u_time_2 = u_time.toStdString();

    string str1("\t\t当前透支金额 RMB  钞 ： ");
    string str2 ;
    strstream ss1;
    ss1<<filename;
    ss1>>str2;

    string frist1="Record-"+str2 +".html";

    const char *RecordFile=frist1.c_str();
    ofstream outfile1(RecordFile,ios::out|ios::app);
    outfile1<<u_time_2<<str1<<overdraft<<endl;
}


