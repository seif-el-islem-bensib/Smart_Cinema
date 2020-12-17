#ifndef STAT_H
#define STAT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class statistique
{
private:
    int ID_stat;
    QString nomfilme;
    QString datee;
public:
    statistique();
    statistique(int,QString,QString);
    int getID_stat();
    QString getnomfilme();
    QString getdatee();
void setnomfilme(QString);
    bool ajouterstat();
    QSqlQueryModel * afficherstat();
    bool supprimerstat(QString);
    bool modiferstat();
    QSqlQueryModel * afficheracr();
    QSqlQueryModel * afficherdc();
    QSqlQueryModel * afficherfirst();
QSqlQueryModel * afficherspectateurcr();
QSqlQueryModel * afficherspectateurdc();
QSqlQueryModel * afficheraNcr();
QSqlQueryModel * afficherNdc();

};

#endif // STAT_H
