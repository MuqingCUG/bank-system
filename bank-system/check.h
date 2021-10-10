#ifndef CHECK_H
#define CHECK_H

#include <QWidget>
#include"user.h"

namespace Ui {
class Check;
}

class Check : public QWidget
{
    Q_OBJECT

public:
    explicit Check(QWidget *parent = nullptr);
    ~Check();

public:
    void set_user(User&);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Check *ui;
    User Check_user;
};

#endif // CHECK_H
