#include "film.h"
#include "QSqlQuery"
#include <QDebug>
#include "qsqltablemodel.h"
#include "QSqlQueryModel"


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


bool Film::update()
{

QSqlQuery query;

query.prepare("UPDATE FILM SET IDfilm = IDfilm, Nomfilm = Nomfilm, IDmdp=IDmdp,Genre=Genre,duree=duree,numsalle=numsalle) ");


query.bindValue(":IDfilm", IDfilm);
query.bindValue(":Nomfilm", Nomfilm);
query.bindValue(":IDmdp", IDmdp);
query.bindValue(":Genre", Genre);
query.bindValue(":duree",duree);
query.bindValue(":numsalle",numsalle);

return    query.exec();
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

/*
bool film::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from etudiant where ID = :id ");
query.bindValue(":id", res);
return    query.exec();

*/
