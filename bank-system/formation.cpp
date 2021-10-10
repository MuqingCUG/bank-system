#include "formation.h"
#include "ui_formation.h"

Formation::Formation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Formation)
{
    ui->setupUi(this);
    this->setWindowTitle("账户信息");
}

Formation::~Formation()
{
    delete ui;
}

void Formation::set_user(User& u)
{
    Forma_user = u;
}

void Formation::on_pushButton_clicked()
{
    string u_account = Forma_user.Accout;
    string u_account_1 = "\t\t 银行账户：" + u_account;
    QString u_account_2 = QString::fromStdString(u_account_1);
    ui->account_Browser->append(u_account_2);

    string u_Name = Forma_user.Name;
    string u_Name_1 = "\t\t 用户姓名：" + u_Name;
    QString u_Name_2 = QString::fromStdString(u_Name_1);
    ui->account_Browser->append(u_Name_2);

    string u_ID = Forma_user.ID;//身份证号
    string u_ID_1 = "\t\t 身份证号：" + u_ID;
    QString u_ID_2 = QString::fromStdString(u_ID_1);
    ui->account_Browser->append(u_ID_2);

    string u_Address = Forma_user.Address;//地址
    string u_Address_1 = "\t\t 用户地址：" + u_Address;
    QString u_Address_2 = QString::fromStdString(u_Address_1);
    ui->account_Browser->append(u_Address_2);

    string u_Telephone = Forma_user.Telephone;//电话
    string u_Telephone_1 = "\t\t 用户电话：" + u_Telephone;
    QString u_Telephone_2 = QString::fromStdString(u_Telephone_1);
    ui->account_Browser->append(u_Telephone_2);
}

void Formation::on_pushButton_2_clicked()
{
    this->close();
}
