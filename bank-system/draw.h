#ifndef DRAW_H
#define DRAW_H

#include <QWidget>
#include"user.h"

namespace Ui {
class Draw;
}

class Draw : public QWidget
{
    Q_OBJECT

public:
    explicit Draw(QWidget *parent = nullptr);
    ~Draw();
public:
    void set_user(User&);
private slots:
    void on_pushButton_clicked();

private:
    Ui::Draw *ui;
    User Draw_user;
};

#endif // DRAW_H
