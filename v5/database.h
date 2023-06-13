#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

#define DATABASE_NAME "bd_sae" // Nom de la base de données
#define CONNECT_TYPE "QODBC"   // Type de connexion utilisé, ici QODBC qui est le pilote ODBC

class DataBase
{
public:
    DataBase();  // Constructeur de la classe DataBase

    // Méthode pour ouvrir la connexion à la base de données
    // Retourne true si la connexion est réussie, false sinon
    bool openDataBase();

    // Méthode pour fermer la connexion à la base de données
    void closeDataBase();

private:
    QSqlDatabase mydb;  // Instance de QSqlDatabase représentant la connexion à la base de données
};

#endif // DATABASE_H
