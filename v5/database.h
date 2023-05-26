#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

#define DATABASE_NAME "bd_sae"
#define CONNECT_TYPE "QODBC"

class DataBase
{
public:
    DataBase();
    bool openDataBase();
    void closeDataBase();

private:
    QSqlDatabase mydb;
};

#endif // DATABASE_H
