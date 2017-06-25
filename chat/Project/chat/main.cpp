#include "main.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    login* lg = new login();

    return a.exec();
}
