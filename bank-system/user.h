#ifndef USER_H
#define USER_H
#include<iostream>
#include<fstream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<strstream>
#include<QString>
#include<cmath>
using namespace std;
class User
{
public:
    string Accout;//银行卡号
    string Name;//开户人姓名
    int Fmoney;//余额
    double Interst;//利息
    string ID;//身份证号
    string Address;//地址
    string Telephone;//电话
    string  Password;//密码
    double rate = 0.005;//利率
    uint day1;//注册开户日期
    uint day2;//登录日期
    uint DAY;
    uint ndaysec = 24*60*60;

    int overdraft = 0;//透支金额
public:
    User(){}
    User(string A,string N,int F,string I,string Ad,string T):Accout(A),Name(N),Fmoney(F),ID(I),Address(Ad),Telephone(T){}

public:
    //设置银行卡号
    void set_Account(string account);
    //设置姓名
    void set_Name(string name);
    //设置余额
    void set_Fmoney(int money);
    //设置身份证号
    void set_ID(string id);
    //设置地址
    void set_Address(string address);
    //设置电话
    void set_Telephone(string T_number);
    //设置密码
    void set_Password(string password);
    //设置信用卡额度
    void set_Overdraft(int number);

    void operator = (User& u)
    {
        this->Accout = u.Accout;
        this->Name = u.Name;
        this->Fmoney = u.Fmoney;
        this->ID = u.ID;
        this->Address = u.Address;
        this->Telephone = u.Telephone;
        this->Password = u.Password;
        this->Interst = u.Interst;
        this->day1 = u.day1;
        this->day2 = u.day2;
        this->DAY = u.DAY;
        this->overdraft = u.overdraft;
    }

public:
    //存款
    void Deposit_Money(int number)
    {
        this->Fmoney += number;
    }
    //取款
    void Draw_Money(int number)
    {
        this->Fmoney -= number;
    }
    //获取利息
    double set_interst()
    {
        uint Day = (day2 - day1 )/(ndaysec) + ((day2 - day1 )%(ndaysec)+(ndaysec-1))/(ndaysec) - 1;
        DAY = Day;
        if(Day> 30)
        {
            //this->Interst = Fmoney * pow(double(1+rate),Day) - Fmoney;
            this->Interst = Fmoney * Day *(rate/double(360)) ;
            return this->Interst;
        }
        else
        {
            this->Interst = 0.0;
            return this->Interst;
        }
    }
    void set_day1(uint Time)
    {
        this->day1 = Time;
    }
    void set_day2(uint Time)
    {
        this->day2 = Time;
    }
public:
    bool Login(string acc,string pwd);
    void SaveFile();
    void SaveFile_2();
    void SaveFile_3();//信用卡账户
};

#endif // USER_H
