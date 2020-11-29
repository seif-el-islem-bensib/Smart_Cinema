#ifndef MAISONDEPRODUCTION_H
#define MAISONDEPRODUCTION_H
#include <iostream>
#include "QString"
#include <vector>
#include "QSqlQueryModel"

using namespace std;


class Maisondeproduction
{
private:
    QString ID_mdp,nom_mdp,nom_dir;



public:
    QSqlQueryModel *  afficher1(QString );
    QSqlQueryModel * afficher();
    Maisondeproduction();
    Maisondeproduction(QString,QString,QString);
    QString rechercher_un_mdp(QString);
    bool ajouter();
    bool update(QString , QString , QString);
    bool supprimer(QString);

};

#endif // MAISONDEPRODUCTION_H
