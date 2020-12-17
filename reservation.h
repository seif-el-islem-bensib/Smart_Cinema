#ifndef RESERVATION_H
#define RESERVATION_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class reservation
{private:
    QString referance;
    QString date;
    int id;
    QString ticket;
    QString movie_name;
    QString type_de_chaise;
    int nombre_de_place;
    int nbr_de_chaise;


public:
    reservation();
    reservation(QString ,QString ,int  ,QString  ,QString ,QString ,int  ,int );
    QString getreferance();
    QString getdate();
    int getid();
    QString getticket();
    QString getmovie_name();
    QString gettype_de_chaise();
    int getnbr_de_chaise();
    int getnombre_de_place();
    void setreferance(QString);



    QSqlQueryModel  verifer();
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(QString);
    bool modifer();
    bool chercher(QString);
};

#endif // RESERVATION_H
