#include "film.h"
#include "QSqlQuery"
#include <QDebug>
#include "qsqltablemodel.h"


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
    QString idf,nf,idmdp,g;
    int d,ns;
QSqlQuery query;

query.prepare("INSERT INTO film (IDfilm,Nomfilm, IDmdp,Genre,duree,numsalle) "
                    "VALUES (:idf, :nf, :idmdp,:g,:d,:ns)");
query.bindValue(":idf", idf);
query.bindValue(":nf", nf);
query.bindValue(":idmdp", idmdp);
query.bindValue(":g", g);
query.bindValue(":d", d);
query.bindValue(":ns", ns);

return    query.exec();
}

/*QSqlQueryModel * Film::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from etudiant");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("PrÃ©nom"));
    return model;
}

bool film::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from etudiant where ID = :id ");
query.bindValue(":id", res);
return    query.exec();
*/

