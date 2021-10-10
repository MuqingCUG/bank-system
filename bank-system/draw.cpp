#include "draw.h"
#include "ui_draw.h"
#include<QMessageBox>
#include<QDateTime>
#include<QString>

Draw::Draw(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Draw)
{
    ui->setupUi(this);
    this->setWindowTitle("取款");
}

Draw::~Draw()
{
    delete ui;
}

void Draw::set_user(User& u)
{
    Draw_user = u;
}

void Draw::on_pushButton_clicked()
{
    QString  str = ui->text_Draw->toPlainText();
    int Money = str.toInt();
    if(Money <= Draw_user.Fmoney)
    {
        Draw_user.Draw_Money(Money);

        Draw_user.SaveFile();
        string str1("\t\t取款 RMB  钞 - ");
        string str2 /*= Depo_user.Accout*/;
        strstream ss;
        ss<<Draw_user.Accout;
        ss>>str2;

        //string frist="Record"+str2 +".txt";
        string frist="Record"+str2 +".html";

        QDateTime time = QDateTime::currentDateTime();
        QString u_time =  time.toString("yyyy-MM-dd ddd hh:mm");
        string u_time_2 = u_time.toStdString();
        const char *RecordFile=frist.c_str();
        ofstream outfile(RecordFile,ios::out|ios::app);
        outfile<<u_time_2<<str1<<Money<<endl;
        outfile.close();
        outfile.clear();
        this->close();
    }
    else
    {
        QMessageBox::warning(this,"warning","您的账户里面没有这么多现金，请重新输入！！！");
    }
}
