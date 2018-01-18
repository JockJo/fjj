#include "./inc/db.h"

db::db()
{
    QSqlDatabase mydb = QSqlDatabase::addDatabase("QMYSQL");
    mydb.setHostName("127.0.0.1");
    mydb.setDatabaseName("educationalmanagement");
    mydb.setPort(3306);
    mydb.setUserName("root");
    mydb.setPassword("root");
    ok = mydb.open();
}

bool db::getStatus(){
    return ok;
}
