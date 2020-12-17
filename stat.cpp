#include "stat.h"
#include <QDebug>
#include "connexion.h"
#include "ui_mainwindow.h"
#include "QComboBox"
void statistique::setnomfilme(QString nomfilmesupp){this->nomfilme=nomfilmesupp;}
QString statistique::getnomfilme(){return nomfilme;}
statistique::statistique()
{
ID_stat=0;
nomfilme="0";
datee="0";
}
statistique::statistique(int ID_stat,QString nomfilme,QString datee)
{
this->nomfilme=nomfilme;
this->ID_stat=ID_stat;
this->datee=datee;
}

bool statistique::ajouterstat()
{QString idstat= QString::number(ID_stat);
    QSqlQuery query;
        query.prepare("INSERT INTO stat (id_stat,nomfilme,datee) VALUES (:id_stat, :nomfilme, :datee)");
        query.bindValue(":id_stat",idstat);
        query.bindValue(":nomfilme", nomfilme);

         query.bindValue(":datee", datee);
        return query.exec();

}


 bool statistique::supprimerstat(QString nomfilme_supp)
 {
     QSqlQuery query;
          query.prepare(" Delete from stat where nomfilme=:nomfilme");
          query.bindValue(0, nomfilme_supp);

         return query.exec();


 }

 QSqlQueryModel * statistique::afficherstat()
 {
     QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery("select * from stat");
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_stat "));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("nomfilme "));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("datee"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("avisP"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("avisN"));
     model->setHeaderData(5, Qt::Horizontal, QObject::tr("spectateur"));
         return model;
 }



 QSqlQueryModel * statistique::afficherdc()
 {
 QSqlQuery query;   
 query.prepare("SELECT * FROM stat ORDER BY avisP DESC;");

     query.exec();
     QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery(query);
  model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_stat"));
  model->setHeaderData(1, Qt::Horizontal, QObject::tr("nomfilme "));
  model->setHeaderData(2, Qt::Horizontal, QObject::tr("date"));
  model->setHeaderData(3, Qt::Horizontal, QObject::tr("avisP"));
  model->setHeaderData(4, Qt::Horizontal, QObject::tr("avisN"));
  model->setHeaderData(5, Qt::Horizontal, QObject::tr("spectateur"));
 return model;
 }

 QSqlQueryModel * statistique::afficherspectateurdc()
 {
     QSqlQuery query;
     query.prepare("SELECT * FROM stat ORDER BY spectateur DESC;");

     query.exec();
     QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery(query);

     model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_stat"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("nomfilme "));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("date"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("avisP"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("avisN"));
     model->setHeaderData(5, Qt::Horizontal, QObject::tr("spectateur"));
  return model;
 }
 QSqlQueryModel * statistique::afficherspectateurcr()
 {
     QSqlQuery query;
     query.prepare("SELECT * FROM stat ORDER BY spectateur ASC;");

     query.exec();
     QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery(query);

     model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_stat"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("nomfilme "));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("date"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("avisP"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("avisN"));
     model->setHeaderData(5, Qt::Horizontal, QObject::tr("spectateur"));
  return model;
 }


 QSqlQueryModel * statistique::afficherNdc()
 {
     QSqlQuery query;
     query.prepare("SELECT * FROM stat ORDER BY avisN DESC;");

     query.exec();
     QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery(query);

     model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_stat"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("nomfilme "));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("date"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("avisP"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("avisN"));
     model->setHeaderData(5, Qt::Horizontal, QObject::tr("spectateur"));
  return model;
 }
 QSqlQueryModel * statistique::afficheraNcr()
 {
     QSqlQuery query;
     query.prepare("SELECT * FROM stat ORDER BY avisN ASC;");

     query.exec();
     QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery(query);

     model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_stat"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("nomfilme "));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("date"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("avisP"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("avisN"));
     model->setHeaderData(5, Qt::Horizontal, QObject::tr("spectateur"));
  return model;
 }


 QSqlQueryModel * statistique::afficheracr()
 {
     QSqlQuery query;
     query.prepare("SELECT * FROM stat ORDER BY avisP ASC;");

     query.exec();
     QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery(query);

     model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_stat"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("nomfilme "));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("date"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("avisP"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("avisN"));
     model->setHeaderData(5, Qt::Horizontal, QObject::tr("spectateur"));
  return model;
 }


 QSqlQueryModel * statistique::afficherfirst()
 {
     QSqlQuery query;
     query.prepare("SELECT * FROM (SELECT nomfilme FROM stat ORDER BY avisP DESC )WHERE ROWNUM = 1;");

     query.exec();
     QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery(query);

     model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_stat"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("nomfilme "));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("date"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("avisP"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("avisN"));
     model->setHeaderData(5, Qt::Horizontal, QObject::tr("spectateur"));
  return model;
 }

