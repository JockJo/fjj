#include "./inc/db.h"
db::db()
{
//    QCoreApplication::addLibraryPath("D:\\Qt\\Qt5.10.1\\5.10.1\\msvc2015\\bin");
    QSqlDatabase mydb = QSqlDatabase::addDatabase("QMYSQL");
    mydb.setHostName("localhost");
    mydb.setDatabaseName("school");
    mydb.setPort(3306);
    mydb.setUserName("root");
    mydb.setPassword("root");
    ok = mydb.open();
    if(ok){
        qDebug()<<"成功连接数据库";
    }else{
        QMessageBox::warning(NULL, QStringLiteral("警告"), QStringLiteral("无法连接数据库"));
    }

}

bool db::getStatus(){
    return ok;
}
