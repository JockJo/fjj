#ifndef MAIN
#define MAIN

#include <QApplication>
#include "chat.h"
#include "login.h"
#include "tcp.h"
#include "udp.h"
#include "set.h"
#include <QSqlDatabase>
#include <QStringList>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>

static bool createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", "connection1");
    db.setDatabaseName("ip.db");
    if(!(db.open()))
    {
        QMessageBox::critical(0, "Connot open database1",
                              "Unable to establish a database connection.",
                              QMessageBox::Cancel);
        return false;
    }
    QSqlQuery query;
    //创建ip表
    query.exec(QString("create table student(address varchar)"));
    return true;
}

#endif // MAIN

