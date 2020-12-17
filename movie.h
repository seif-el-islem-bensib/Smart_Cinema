#ifndef MOVIE_H
#define MOVIE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class movie
{
private:
    QString nom_movie;
    QString datee;
    int avis_N;
    int avis_P;
    int ID_stat;


public:
    movie();
    movie(int,QString,QString);
    QString getnom_movie();
    int getid_stat();
    int setidstat(int);
    int getavis_P();
    int getavis_N();
    void setavie_P(int);
    void setavie_N(int);
    void setnom_avis(QString);
    QString getdatee();
    QString setdatee(QString);
    QSqlQueryModel  verifer();
    bool ajouterstat();
    QSqlQueryModel * afficherstat();
    QSqlQueryModel * afficherstat1 ();
    bool modifer();
    bool chercher(QString);
    QSqlQueryModel * affichercr();
    QSqlQueryModel * afficherdc();
};

#endif // MOVIE_H
