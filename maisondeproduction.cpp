#include "maisondeproduction.h"
#include "QSqlQuery"
#include <QDebug>
#include "qsqltablemodel.h"

Maisondeproduction::Maisondeproduction()
{
}

Maisondeproduction::Maisondeproduction(QString ID_mdp,QString nom_mdp,QString directeur)
{
    this->ID_mdp=ID_mdp;
    this->nom_mdp=nom_mdp;
    this->directeur1=directeur;
};

bool Maisondeproduction::ajouter()
{
    QSqlQuery query;

    query.prepare("INSERT INTO Maisondeproduction (ID_mdp,directeur1,nom_mdp ) "
                        "VALUES (:ID_mdp, :directeur1, :nom_mdp)");
    query.bindValue(":ID_mdp", ID_mdp);
    query.bindValue(":directeur",directeur1 );
    query.bindValue(":nom_mdp", nom_mdp);

    return    query.exec();
}
