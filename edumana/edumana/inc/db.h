#ifndef DB_H
#define DB_H

#include    <QSqlDatabase>
#include    <QMessageBox>
#include    <QDebug>
#include    <QCoreApplication>


class db
{
public:
    explicit db();
    bool getStatus();
private:
    bool ok;

};

#endif // DB_H
