#include "connexion.h"

Connection::Connection()
{}

bool Connection::ouvrirConnection()
{

    db=QSqlDatabase::addDatabase("QODBC");


db.setDatabaseName("rayen_db");
db.setUserName("Rayen");//inserer nom de l'utilisateur
db.setPassword("Rayen123456789");//inserer mot de passe de cet utilisateur


if (db.open())
return true;
    return  false;
}
void Connection::fermerConnection()
{db.close();}
