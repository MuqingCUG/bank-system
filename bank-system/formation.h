#ifndef FORMATION_H
#define FORMATION_H

#include <QWidget>
#include"user.h"

namespace Ui {
class Formation;
}

class Formation : public QWidget
{
    Q_OBJECT

public:
    explicit Formation(QWidget *parent = nullptr);
    ~Formation();
public:
    void set_user(User&);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Formation *ui;
    User Forma_user;
};

#endif // FORMATION_H
