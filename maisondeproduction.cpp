#include "maisondeproduction.h"
#include "QSqlQuery"
#include <QDebug>
#include "qsqltablemodel.h"

Maisondeproduction::Maisondeproduction()
{
}

Maisondeproduction::Maisondeproduction(QString ID_mdp,QString nom_mdp,QString nom_dir)
{
    this->ID_mdp=ID_mdp;
    this->nom_mdp=nom_mdp;
    this->nom_dir=nom_dir;
};

bool Maisondeproduction::ajouter()
{
    QSqlQuery query;

    query.prepare("INSERT INTO Maisondeproduction (ID_mdp,nom_dir,nom_mdp) "
                        "VALUES (:ID_mdp,:nom_dir, :nom_mdp)");
    query.bindValue(":ID_mdp", ID_mdp);
    query.bindValue(":nom_mdp", nom_mdp);
    query.bindValue(":nom_dir", nom_dir);

    return    query.exec();
}

QSqlQueryModel * Maisondeproduction::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from Maisondeproduction");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Directeur"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom"));
    return model;
}


bool Maisondeproduction::supprimer(QString idd)
{
QSqlQuery query;
query.prepare("Delete from Maisondeproduction where ID_mdp = :deletemdp ");
query.bindValue(":deletemdp", idd);
return    query.exec();
}
bool Maisondeproduction::update(QString id, QString nom, QString dirr)
{

QSqlQuery query;

if (nom != "" ) {
        query.prepare("UPDATE Maisondeproduction SET nom_mdp=:NOMM_2 WHERE ID_mdp = :IDM_2 ");
        query.bindValue(":IDM_2", id);
        query.bindValue(":NOMM_2", nom);
        if(!query.exec())
           {
            return false;
        }

}
if (dirr != "" ) {
        query.prepare("UPDATE Maisondeproduction SET nom_dir=:DIRM_2 WHERE ID_mdp = :IDM_2 ");
        query.bindValue(":IDM_2", id);
        query.bindValue(":DIRM_2", dirr);
        if(!query.exec())
           {
            return false;
        }
}


return    true;
}

QSqlQueryModel *  Maisondeproduction::afficher1(QString id)
{
    QSqlQuery query;
    query.prepare("select * from Maisondeproduction  WHERE ID_MDP=:id");
    query.bindValue(":id", id);
    query.exec();
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery(query);

 model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID MDP"));
 model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom MDP "));
 model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nom Directeur MDP"));

     return model;


}

