#include "film.h"
#include "QSqlQuery"
#include <QDebug>
#include "qsqltablemodel.h"
#include "QSqlQueryModel"
#include <iostream>
using namespace std;
Film::Film()
{
duree=numsalle=0;
}

Film::Film(QString IDfilm,QString Nomfilm,QString IDmdp,QString Genre,int duree,int numsalle)
{
  this->IDfilm=IDfilm;
  this->Nomfilm=Nomfilm;
  this->IDmdp=IDmdp;
  this->Genre=Genre;
  this->duree=duree;
  this->numsalle=numsalle;
}



bool Film::ajouter()
{

QSqlQuery query;

query.prepare("INSERT INTO film (IDfilm,Nomfilm, IDmdp,Genre,duree,numsalle) "
                    "VALUES (:IDfilm, :Nomfilm, :IDmdp,:Genre,:duree,:numsalle)");
query.bindValue(":IDfilm", IDfilm);
query.bindValue(":Nomfilm", Nomfilm);
query.bindValue(":IDmdp", IDmdp);
query.bindValue(":Genre", Genre);
query.bindValue(":duree",duree);
query.bindValue(":numsalle",numsalle);

return    query.exec();
}


bool Film::update(QString idd, QString Nom, QString IDMDP, QString Genre, int Duree, int Numsalle)
{

QSqlQuery query;

if (Nom != "") {
    query.prepare("UPDATE FILM SET Nomfilm = :modnom WHERE IDfilm = :modid ");
    query.bindValue(":modid", idd);
    query.bindValue(":modnom", Nom);
    if(!query.exec())
       {
        return false;
    }
}
if (IDMDP != "" ) {
        query.prepare("UPDATE FILM SET IDmdp=:modidmdp WHERE IDfilm = :modid ");
        query.bindValue(":modid", idd);
        query.bindValue(":modidmdp", IDMDP);
        if(!query.exec())
           {
            return false;
        }

}
if (Genre != "" ) {
        query.prepare("UPDATE FILM SET Genre=:modg WHERE IDfilm = :modid ");
        query.bindValue(":modid", idd);
        query.bindValue(":modg", Genre);
        if(!query.exec())
           {
            return false;
        }

}
if (Duree != 0 ) {
        query.prepare("UPDATE FILM SET duree=:modd WHERE IDfilm = :modid ");
        query.bindValue(":modid", idd);
        query.bindValue(":modd",Duree);
        if(!query.exec())
           {
            return false;
        }

}
if (Numsalle != 0) {
        query.prepare("UPDATE FILM SET numsalle=:modns WHERE IDfilm = :modid ");
        query.bindValue(":modid", idd);
        query.bindValue(":modns",Numsalle);
        if(!query.exec())
           {
            return false;
        }

}



return    true;
}



QSqlQueryModel * Film::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from Film");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID Film"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom "));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("Genre"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("duree"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("numsalle"));

    return model;
}


bool Film::supprimer(QString idd)
{
QSqlQuery query;
query.prepare("Delete from Film where IDfilm = :suppfilm ");
query.bindValue(":suppfilm", idd);
return    query.exec();
}

int Film::compter(QString genre, int dureemin, int durremax, QString mdp) {
    QSqlQuery query;
    int c = 0;
    if (genre != "") {
        query.prepare("SELECT * FROM FILM WHERE GENRE=:comptegenre");
        query.bindValue(":comptegenre", genre);
        query.exec();
        while(query.next()) {
            c++;
        }
        return c;
    }
    if (mdp != "") {
        query.prepare("SELECT * FROM FILM WHERE IDMDP=:mdp");
        query.bindValue(":mdp", mdp);
        query.exec();
        while(query.next()) {
            c++;
        }
        return c;
    }
    if (dureemin != 0 && durremax != 0 && durremax > dureemin) {
        query.prepare("SELECT * FROM FILM WHERE DUREE<:durremax and DUREE>:dureemin");
        query.bindValue(":durremax", durremax);
        query.bindValue(":dureemin", dureemin);
        query.exec();
        while(query.next()) {
            c++;
        }
        return c;
    }
    return 0;
}

QSqlQueryModel * Film::affichercr()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM Film ORDER BY NOMFILM ASC;");

    query.exec();
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery(query);

 model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID Film"));
 model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom "));
 model->setHeaderData(3, Qt::Horizontal, QObject::tr("Genre"));
 model->setHeaderData(4, Qt::Horizontal, QObject::tr("duree"));
 model->setHeaderData(5, Qt::Horizontal, QObject::tr("numsalle"));


return model;
}
QSqlQueryModel * Film::afficherdc()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM Film ORDER BY NOMFILM DESC;");

    query.exec();
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery(query);

 model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID Film"));
 model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom "));
 model->setHeaderData(3, Qt::Horizontal, QObject::tr("Genre"));
 model->setHeaderData(4, Qt::Horizontal, QObject::tr("duree"));
 model->setHeaderData(5, Qt::Horizontal, QObject::tr("numsalle"));


return model;
}
QSqlQueryModel * Film::afficherdu()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM Film ORDER BY DUREE DESC;");

    query.exec();
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery(query);

 model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID Film"));
 model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom "));
 model->setHeaderData(3, Qt::Horizontal, QObject::tr("Genre"));
 model->setHeaderData(4, Qt::Horizontal, QObject::tr("duree"));
 model->setHeaderData(5, Qt::Horizontal, QObject::tr("numsalle"));


return model;
}
QSqlQueryModel * Film::afficherGE()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM Film ORDER BY GENRE DESC;");

    query.exec();
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery(query);

 model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID Film"));
 model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom "));
 model->setHeaderData(3, Qt::Horizontal, QObject::tr("Genre"));
 model->setHeaderData(4, Qt::Horizontal, QObject::tr("duree"));
 model->setHeaderData(5, Qt::Horizontal, QObject::tr("numsalle"));


return model;
}
QSqlQueryModel *  Film::afficher1(QString id)
{
    QSqlQuery query;
    query.prepare("select * from Film WHERE IDFILM=:id");
    query.bindValue(":id", id);
    query.exec();
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery(query);

 model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID Film"));
 model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom "));
 model->setHeaderData(3, Qt::Horizontal, QObject::tr("Genre"));
 model->setHeaderData(4, Qt::Horizontal, QObject::tr("duree"));
 model->setHeaderData(5, Qt::Horizontal, QObject::tr("numsalle"));

     return model;

}
QSqlQueryModel *  Film::afficher2(QString id)
{
    QSqlQuery query;
    query.prepare("select * from Film WHERE NOMFILM=:id");
    query.bindValue(":id", id);
    query.exec();
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery(query);

 model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID Film"));
 model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom "));
 model->setHeaderData(3, Qt::Horizontal, QObject::tr("Genre"));
 model->setHeaderData(4, Qt::Horizontal, QObject::tr("duree"));
 model->setHeaderData(5, Qt::Horizontal, QObject::tr("numsalle"));

     return model;

}

QSqlQueryModel *  Film::afficher3(int id)
{
    QSqlQuery query;
    query.prepare("select * from Film WHERE NUMSALLE=:id");
    query.bindValue(":id", id);
    query.exec();
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery(query);

 model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID Film"));
 model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom "));
 model->setHeaderData(3, Qt::Horizontal, QObject::tr("Genre"));
 model->setHeaderData(4, Qt::Horizontal, QObject::tr("duree"));
 model->setHeaderData(5, Qt::Horizontal, QObject::tr("numsalle"));

     return model;

}

