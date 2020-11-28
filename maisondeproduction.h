#ifndef MAISONDEPRODUCTION_H
#define MAISONDEPRODUCTION_H
#include <iostream>
#include "QString"
#include <vector>
using namespace std;


class Maisondeproduction
{
private:
    QString ID_mdp,nom_mdp,directeur1;



public:
    Maisondeproduction();
    Maisondeproduction(QString,QString,QString);
    QString rechercher_un_mdp(QString);
    bool ajouter();

};

#endif // MAISONDEPRODUCTION_H
