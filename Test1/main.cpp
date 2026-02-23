#include "animal.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    //系统类
    QApplication a(argc, argv);
    Animal w;
    w.show();
    return a.exec();
}
