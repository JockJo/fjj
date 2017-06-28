#include "main.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //如果数据库连接失败
    if(!createConnection())
    {
        return 1;
    }
    login* lg = new login();

    return a.exec();
}
