#include "connection.h"

Connection::Connection()
{

}
bool Connection::ouvrirConnection()
{

    db=QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("project2a9");
db.setUserName("seif");//inserer nom de l'utilisateur
db.setPassword("22653556");//inserer mot de passe de cet utilisateur*/

if (db.open())
return true;
    return  false;
}
void Connection::fermerConnection()
{db.close();}
