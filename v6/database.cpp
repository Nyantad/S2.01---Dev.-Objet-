#include "database.h"

DataBase::DataBase()
{

}

bool DataBase::openDataBase()
{
    mydb = QSqlDatabase::addDatabase(CONNECT_TYPE);
    mydb.setDatabaseName(DATABASE_NAME);
    mydb.setUserName("mpingard_bd");
    mydb.setPassword("mpingard_bd");
    if(mydb.open()){
        return true;
    } else {
        return false;
    }
}

void DataBase::closeDataBase()
{
    mydb.close();
}
