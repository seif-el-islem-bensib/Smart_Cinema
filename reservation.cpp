#include "reservation.h"
#include <QDebug>
#include "connexion.h"

int reservation::getid(){return id;}
int reservation::getnbr_de_chaise(){return  nbr_de_chaise;}
int reservation::getnombre_de_place(){return nombre_de_place;}
QString reservation::getmovie_name(){return  movie_name;}
QString reservation::gettype_de_chaise(){return  type_de_chaise;}
QString reservation::getticket(){return  ticket;}
QString reservation::getreferance(){return  referance;}
QString reservation::getdate(){return date;}
void reservation::setreferance(QString referance){this->referance=referance;}



reservation::reservation()
{
     referance="";
     date="";
     id=0;

     ticket="";
     movie_name="";
     type_de_chaise="";
     nombre_de_place=0;
     nbr_de_chaise=0;


}

reservation::reservation(QString referance,QString date,int id ,QString ticket ,QString movie_name,QString type_de_chaise,int nombre_de_place ,int nbr_de_chaise)
{
this->referance=referance;
this->date=date;
this->id=id;
this->ticket=ticket;
this->movie_name=movie_name;
this->type_de_chaise=type_de_chaise;
this->nombre_de_place=nombre_de_place;
this->nbr_de_chaise=nbr_de_chaise;
}

bool reservation::ajouter()
{
    QSqlQuery query;
  QString id_string= QString::number(id);
  QString nbr_de_chaise_string= QString::number(nbr_de_chaise);
  QString nombre_de_place_string= QString::number(nombre_de_place);
         query.prepare("INSERT INTO les_reservation (referance,datee,id,ticket,movie_name,type_de_chaise,numero_de_place,nbr_de_chaise) VALUES (:referance, :datee, :id, :ticket, :movie_name, :type_de_chaise, :numero_de_place, :nbr_de_chaise)");

         query.bindValue(":referance",referance);
         query.bindValue(":datee", date);
         query.bindValue(":id", id_string);
         query.bindValue(":ticket", ticket);
         query.bindValue(":movie_name",movie_name);
         query.bindValue(":type_de_chaise", type_de_chaise);
         query.bindValue(":numero_de_place", nombre_de_place_string);
         query.bindValue(":nbr_de_chaise", nbr_de_chaise_string);

        return query.exec();

}

bool reservation::modifer()
{
    bool test=false;
    QSqlQuery query;

    QString le_nbr_deplace_string=QString::number(nombre_de_place);
    QString le_nbr_de_chaise_string=QString::number(nbr_de_chaise);
    query.prepare(" UPDATE lesreservation SET datee=:datee,ticket=:ticket,type_de_chaise=:type_de_chaise,nombre_de_place=:nombre_de_place,nbr_de_chaise=nbr_de_chaise WHERE referance:=referance");
      query.bindValue(":datee", date);
      query.bindValue(":ticket", ticket);
      query.bindValue(":movie_name", movie_name);
      query.bindValue(":type_de_chaise", type_de_chaise);
      query.bindValue(":nombre_de_place", le_nbr_de_chaise_string);
      query.bindValue(":nbr_de_chaise", le_nbr_de_chaise_string);
          return query.exec();
          return test;
}

bool reservation::supprimer(QString referance_supp)
{
    QSqlQuery query;
         query.prepare(" Delete from les_reservation where referance=:referance");
         query.bindValue(0, referance_supp);

        return query.exec();


}

QSqlQueryModel* reservation::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from les_reservation");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("referance "));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("datee"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("id "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("ticket"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nom de filme"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("type de chaise"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("nombre de place"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("numero de chaise"));

        return model;
}
