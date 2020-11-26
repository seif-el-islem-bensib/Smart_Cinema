#include "maisondeproduction.h"

Maisondeproduction::Maisondeproduction()
{
vector<QString> *Tab_de_nom_acteur=new vector<QString>;
}

Maisondeproduction::Maisondeproduction(QString ID_mdp,QString nom_mdp,QString directeur,vector<QString> Tab_de_nom_acteur)
{
    this->ID_mdp=ID_mdp;
    this->nom_mdp=nom_mdp;
    this->directeur=directeur;
    this->Tab_de_nom_acteur=Tab_de_nom_acteur;

};
