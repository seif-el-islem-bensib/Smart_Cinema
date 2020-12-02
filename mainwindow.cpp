#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "film.h"
#include "maisondeproduction.h"
#include "connection.h"
#include <QTableWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    Connection c;
        bool test=c.ouvrirConnection();
        if(test)
        {
            QMessageBox::information(nullptr, QObject::tr("database is open"),
                        QObject::tr("connection successful"), QMessageBox::Ok);


        }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                        QObject::tr("connection failed"), QMessageBox::Cancel);

        }
    ui->setupUi(this);

    ui->L5->setValidator(new QIntValidator(0, 9, this));
    ui->L6->setValidator(new QIntValidator(0, 999, this));
    ui->L4->setValidator(new QRegExpValidator(QRegExp("[a-z]{1}[a-z]{0,255}"),NULL));
    ui->L1->setValidator(new QRegExpValidator(QRegExp("[a-z0-9]{1}[a-z0-9_-]{0,255}"),NULL));
    ui->L2->setValidator(new QRegExpValidator(QRegExp("[a-z0-9]{1}[a-z0-9_-]{0,255}"),NULL));
    ui->L3->setValidator(new QRegExpValidator(QRegExp("[a-z0-9]{1}[a-z0-9_-]{0,255}"),NULL));
    ui->IDM->setValidator(new QRegExpValidator(QRegExp("[a-z0-9]{1}[a-z0-9_-]{0,255}"),NULL));
    ui->DIRM->setValidator(new QRegExpValidator(QRegExp("[a-z]{1}[a-z]{0,255}"),NULL));

    ui->NOMM->setValidator(new QRegExpValidator(QRegExp("[a-z]{1}[a-z]{0,255}"),NULL));
    ui->filmtable->setModel(tmpfilm.afficher());
    ui->maisontable->setModel(tmpmsn.afficher());



}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_jouterfm_clicked()
{
    QString IDfilm= ui->L1->text();
    QString Nomfilm= ui->L2->text();
    QString IDmdp= ui->L3->text();
    QString Genre= ui->L4->text();

     int duree = ui->L5->text().toInt();
     int numsalle = ui->L6->text().toInt();
  Film f(IDfilm,Nomfilm,IDmdp,Genre,duree,numsalle);

  bool test=f.ajouter();
  if(duree<0 && Genre.toInt()){test=false;}
  if(test)
{

      ui->filmtable->setModel(tmpfilm.afficher());
QMessageBox::information(nullptr, QObject::tr("Ajouter un Film"),
                  QObject::tr("Film ajoutee"), QMessageBox::Ok);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un FIlm"),
                  QObject::tr("Operation Echoue"), QMessageBox::Ok);


}




void MainWindow::on_ajout_maisondeproduction_clicked()
{
    QString ID_mdp= ui->IDM->text();
    QString nom_mdp= ui->NOMM->text();
    QString direc= ui->DIRM->text();

  Maisondeproduction m(ID_mdp,nom_mdp, direc);

  bool test=m.ajouter();
  if(!direc.toInt()){test=false;};
  if(test)
{

      ui->maisontable->setModel(tmpmsn.afficher());
QMessageBox::information(nullptr, QObject::tr("Ajouter une Maison de Production"),
                  QObject::tr("Maison de production ajoute"), QMessageBox::Ok);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter une Maison de Production"),
                  QObject::tr("Operation Echoue verifier les champs saisie"), QMessageBox::Cancel);

}

void MainWindow::on_modifierfilm_clicked()
{
    QString IDfilm= ui->modid->text();
    QString Nomfilm= ui->modnom->text();
    QString IDmdp= ui->modidmdp->text();
    QString Genre= ui->modg->text();
     int duree = ui->modd->text().toInt();
     int numsalle = ui->modnds->text().toInt();
  bool test=tmpfilm.update(IDfilm, Nomfilm, IDmdp, Genre, duree, numsalle);
  if(test)
{

      ui->filmtable->setModel(tmpfilm.afficher());
QMessageBox::information(nullptr, QObject::tr("Ajouter un Film"),
                  QObject::tr("Film modifier.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un FIlm"),
                  QObject::tr("Operation Echoue\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
}


void MainWindow::on_suppfilm_clicked()
{
    QString id = ui->filmsup->text();
    bool test=tmpfilm.supprimer(id);
    if(test)
    {ui->filmtable->setModel(tmpfilm.afficher());;//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer effectuer"),
                    QObject::tr("Film supprime.\n"), QMessageBox::Ok);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer erronée"),
                    QObject::tr("Erreur Film introuveable  !.\n"), QMessageBox::Cancel);

}

void MainWindow::on_deletemdp_clicked()
{
    QString id = ui->delmaison->text();
    bool test=tmpmsn.supprimer(id);
    if(test)
    {ui->maisontable->setModel(tmpmsn.afficher());;//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer effectuer"),
                    QObject::tr("msn supprime.\n"), QMessageBox::Ok);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer erronée"),
                    QObject::tr("Erreur Film introuveable  !.\n"), QMessageBox::Cancel);

}

void MainWindow::on_Mod_maisondeproduction_clicked()
{
    QString ID_mdp= ui->IDM_2->text();
    QString nom_mdp= ui->NOMM_2->text();
    QString nom_dir= ui->DIRM_2->text();
  bool test=tmpmsn.update(ID_mdp,nom_mdp,nom_dir);
  if(test)
{

      ui->maisontable->setModel(tmpmsn.afficher());
QMessageBox::information(nullptr, QObject::tr("Maison de Production Modifier"),
                  QObject::tr("Maison de production ajoute"), QMessageBox::Ok);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Modification erronée "),
                  QObject::tr("Operation Echoue"), QMessageBox::Cancel);

}

//compter
void MainWindow::on_pushButton_clicked()
{
    QString genre= ui->comptegenre->text();
    int dureemin= ui->compteordrmin->text().toInt();
    int dureemax= ui->compteordremax->text().toInt();
    QString mdp= ui->comptermdp->text();
     int compte=tmpfilm.compter(genre,dureemin, dureemax, mdp);
     QString comptes = QString ::number(compte);
    ui->label_22->setText(comptes);
}

void MainWindow::on_afficher1_clicked()
{
   QString ID= ui->ID1->text();

   ui->filmtable_4->setModel(tmpfilm.afficher1(ID));

}

void MainWindow::on_afficher1_3_clicked()
{
    QString ID= ui->ID1_3->text();

    ui->filmtable_5->setModel(tmpmsn.afficher1(ID));

}



void MainWindow::on_Trier_clicked()
{
    if(ui->radioButton->isChecked())
       {
        ui->filmtable_2->setModel(tmpfilm.affichercr());

       }
    else if (ui->radioButton_2->isChecked())
    {
        ui->filmtable_2->setModel(tmpfilm.afficherdc());

    }
    else
    {
        ui->filmtable_2->setModel(tmpfilm.afficherdu());
    }
}


