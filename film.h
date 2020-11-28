#ifndef FILM_H
#define FILM_H
#include <iostream>
#include "QString"
#include "QSqlQueryModel"

class Film
{
public:
    Film();
    Film(QString,QString,QString,QString,int,int);
    bool ajouter();
    QSqlQueryModel * afficher();
    bool update();
    QString rechercher_un_film(QString);
    Film trier_les_film(char);
    int compter_les_film();

private:
    QString IDfilm,Nomfilm,IDmdp,Genre;
    int duree,numsalle;
    QString get_IDfilm(){return IDfilm;}
    QString get_Nomfilm( ){return Nomfilm;}
    QString get_IDmdp(){return IDmdp;}
    QString get_Genre(){return Genre;}
    int get_duree(){return duree;}
    int get_numsalle(){return numsalle;}

};

#endif // FILM_H
