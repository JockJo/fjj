#include "./inc/main.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    login l;
    l.show();
//    db *mydb = new db();

    return a.exec();
}
