#ifndef LOOK_H
#define LOOK_H

#include <QWidget>
#include"user.h"
namespace Ui {
class Look;
}

class Look : public QWidget
{
    Q_OBJECT

public:
    explicit Look(QWidget *parent = nullptr);
    ~Look();

public:
    void set_user(User&);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Look *ui;
    User Look_user;
};

#endif // LOOK_H
