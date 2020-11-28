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
            QMessageBox::critical(nullptr, QObject::tr("database is open"),
                        QObject::tr("connection successful.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);


        }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                        QObject::tr("connection failed.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

        }
    ui->setupUi(this);
    ui->filmtable->setModel(tmpfilm.afficher());

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
  if(test)
{

      //ui->Film->setModel(tmpefilm.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter un Film"),
                  QObject::tr("Film ajoutee.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un FIlm"),
                  QObject::tr("Operation Echoue\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);


}




void MainWindow::on_ajout_maisondeproduction_clicked()
{
    QString ID_mdp= ui->ID->text();
    QString nom_mdp= ui->NOM->text();
    QString directeur1= ui->DIR->text();

  Maisondeproduction m(ID_mdp,nom_mdp,directeur1);
  bool test=m.ajouter();
  if(test)
{

      //ui->Film->setModel(tmpefilm.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter une Maison de Production"),
                  QObject::tr("Film ajoutee.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter une Maison de Production"),
                  QObject::tr("Operation Echoue\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_modifierfilm_clicked()
{
    QString IDfilm= ui->modid->text();
    QString Nomfilm= ui->modnom->text();
    QString IDmdp= ui->modidmdp->text();
    QString Genre= ui->modg->text();
     int duree = ui->modd->text().toInt();
     int numsalle = ui->modnds->text().toInt();
  Film f(IDfilm,Nomfilm,IDmdp,Genre,duree,numsalle);
  bool test=f.update();
  if(test)
{

      //ui->Film->setModel(tmpefilm.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter un Film"),
                  QObject::tr("Film modifier.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un FIlm"),
                  QObject::tr("Operation Echoue\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
}


void MainWindow::on_afficherFilmbButton_clicked()
{

}
