#include "database.h"

// Constructeur de la classe DataBase
DataBase::DataBase()
{

}

// Définit la méthode pour ouvrir la base de données
bool DataBase::openDataBase()
{
    // Ajoute une instance de base de données QSqlDatabase et retourne cette instance
    // CONNECT_TYPE est défini comme QODBC dans l'en-tête de la classe
    mydb = QSqlDatabase::addDatabase(CONNECT_TYPE);

    // Définit le nom de la base de données
    // DATABASE_NAME est défini comme "bd_sae" dans l'en-tête de la classe
    mydb.setDatabaseName(DATABASE_NAME);

    // Définit le nom d'utilisateur pour se connecter à la base de données
    mydb.setUserName("mpingard_bd");

    // Définit le mot de passe pour se connecter à la base de données
    mydb.setPassword("mpingard_bd");

    // Tente d'ouvrir la base de données avec les paramètres donnés
    // Si l'ouverture est réussie, renvoie true
    if(mydb.open()){
        return true;
    } else {
        // Si l'ouverture échoue, renvoie false
        return false;
    }
}

// Définit la méthode pour fermer la base de données
void DataBase::closeDataBase()
{
    // Ferme la base de données
    mydb.close();
}
