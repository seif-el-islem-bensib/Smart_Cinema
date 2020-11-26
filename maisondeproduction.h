#ifndef MAISONDEPRODUCTION_H
#define MAISONDEPRODUCTION_H
#include <iostream>
#include "QString"
#include <vector>
using namespace std;


class Maisondeproduction
{
private:
    QString ID_mdp,nom_mdp,directeur;
    vector<QString> Tab_de_nom_acteur;


public:
    Maisondeproduction();
    Maisondeproduction(QString,QString,QString,vector<QString>);
    QString rechercher_un_mdp(QString);

};

#endif // MAISONDEPRODUCTION_H
