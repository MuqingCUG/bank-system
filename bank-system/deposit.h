#ifndef DEPOSIT_H
#define DEPOSIT_H

#include <QWidget>
#include"user.h"

namespace Ui {
class Deposit;
}

class Deposit : public QWidget
{
    Q_OBJECT

public:
    explicit Deposit(QWidget *parent = nullptr);
    ~Deposit();

public:
    void set_user(User&);
private slots:
    void on_pushButton_clicked();

private:
    Ui::Deposit *ui;
    User Depo_user;
};

#endif // DEPOSIT_H
