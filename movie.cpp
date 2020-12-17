#include "movie.h"
#include <QDebug>
#include "connexion.h"
movie::movie()
{
    nom_movie="0";
    avis_P=0;
     avis_N=0;
     datee="0";
     ID_stat=0;
}
int movie::getavis_N(){return avis_N;}
int movie::getavis_P(){return avis_P;}
int movie::getid_stat(){return ID_stat;}
QString movie::getnom_movie(){return  nom_movie;}
QString movie::getdatee(){return datee;}

movie::movie(int ID_stat,QString nom_movie,QString datee)
{
this->nom_movie=nom_movie;
this->ID_stat=ID_stat;
this->datee=datee;

}

bool movie::ajouterstat()
{
    QString text;
    QSqlQuery query;

 query.prepare("INSERT INTO movie (ID_stat,datee) "
               "VALUES (:ID_stat, :datee) where nom_movie='"+text+"' ");
         query.bindValue(":ID_stat", ID_stat);
         query.bindValue(":datee", datee);
        return query.exec();
}

QSqlQueryModel * movie::afficherstat()
{
    QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from movie");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("nomfilme"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("avis_P"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("avis_N"));
    return model;
}

QSqlQueryModel * movie::affichercr()
{

    QSqlQuery query;
        query.prepare("SELECT * FROM movie ORDER BY avis_P ASC;");

        query.exec();
        QSqlQueryModel * model= new QSqlQueryModel();
        model->setQuery(query);

     model->setHeaderData(0, Qt::Horizontal, QObject::tr("idfilme"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("nomfilme "));




    return model;


}
QSqlQueryModel * movie::afficherdc()
{

        QSqlQuery query;
        query.prepare("SELECT * FROM movie ORDER BY avis_P DESC;");

        query.exec();
        QSqlQueryModel * model= new QSqlQueryModel();
        model->setQuery(query);

        model->setHeaderData(0, Qt::Horizontal, QObject::tr("idfilme"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("nomfilme "));
     return model;

}
