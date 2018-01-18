#ifndef DB_H
#define DB_H

#include    <QSqlDatabase>


class db
{
public:
    db();
    bool getStatus();
private:
    bool ok;

};

#endif // DB_H
