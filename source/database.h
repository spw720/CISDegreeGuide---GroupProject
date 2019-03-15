#ifndef DATABASE_H
#define DATABASE_H
#include <QtSql>
#include <QDebug>

class Database
{
public:
    QSqlDatabase db;
    Database();
    bool connOpen();
    void connClosed();
    ~Database();
};

#endif // DATABASE_H

