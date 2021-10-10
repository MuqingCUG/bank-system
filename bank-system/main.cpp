#include "mainwindow.h"
#include <QApplication>
#include "login.h"
#include"user.h"
//#include"reform.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qputenv("QT_MAC_WANTS_LAYER", "1");
    //    Reform w;
    //    w.show();
    Login w;
    w.show();
    //    MainWindow w;
    //    w.show();
    return a.exec();
}
