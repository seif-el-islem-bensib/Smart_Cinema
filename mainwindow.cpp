#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connexion.h"
#include <QMessageBox>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include "reservation.h"
#include <QComboBox>
#include "stat.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMediaPlayer>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->le_client->setValidator(new QIntValidator(0, 9999999, this));

    ui->Afficher_2->setModel(R1.afficher());
    Connection c;
        bool test=c.ouvrirConnection();
        if(test)
        {
            QMessageBox::information(nullptr, QObject::tr("database is open"),
                        QObject::tr("connection successful.\n"
                                    "Click ok to exit."), QMessageBox::Ok);

        }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                        QObject::tr("connection failed.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_ajouter_clicked()
{

    QString referance=ui->le_referance->text();
    QString date=ui->le_date->text();
    int id=ui->le_client->text().toInt();
    QString ticket=ui->le_ticket->currentText();
    QString movie_name=ui->le_movie->currentText();
    QString type_de_chaise=ui->le_type->currentText();
    int nombre_de_place=ui->le_nbr_deplace->text().toInt();
    int nbr_de_chaise=ui->le_nbr_de_chaise->currentText().toInt();

  reservation R1(referance,date,id,ticket,movie_name,type_de_chaise,nombre_de_place,nbr_de_chaise);


 bool test=R1.ajouter();
 QMessageBox msgBox;

 if(test)
   {  msgBox.setText("Ajout avec succes.");
     ui->Afficher_2->setModel(R1.afficher());
     msgBox.exec();
 }
 else{
     msgBox.setText("Echec d'ajout");
    msgBox.exec();
}
}

void MainWindow::on_close_clicked()
{
    close();
}

void MainWindow::on_affichebutton_clicked()
{
    ui->Afficher_2->setModel(R1.afficher());
}

void MainWindow::on_movie_refraiche_clicked()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select nomfilme from movie");
    ui->le_movie->setModel(model);
}

void MainWindow::on_supp_2_clicked()
{

    reservation R;
    R.setreferance(ui->referance_4->text());
       bool test=R.supprimer(R.getreferance());
       QMessageBox msgBox;

    if(test)
       { msgBox.setText("Suppression avec succes.");
        msgBox.exec();
        player = new QMediaPlayer(this);
        player->setMedia(QUrl::fromLocalFile("C:/Users/LENOVO/Desktop/Welcome (1).mp3"));
        qDebug() << player->errorString();
        player->setVolume(100);
        player->play();
    }
    else{
        msgBox.setText("Echec de suppression");
        msgBox.exec();
}}
/*
void MainWindow::on_pushButton_6_clicked()
{
    QString choix1,choix2;

             QString  date=ui->date_new->text();
             QString  ticket=ui->ticket_new->currentText();
             QString referance;
             int id ;
             QString movie_name=ui->new_movie->currentText();
             QString type_de_chaise=ui->new_type->currentText();
             QString  nombre_de_place=ui->new_nbr_de_place->text().toInt();
             QString  nbr_de_chaise=ui->new_chaise->currentText().toInt();

             reservation R1(referance,date,id,ticket,movie_name,type_de_chaise,nombre_de_place,nbr_de_chaise);
            QMessageBox msgBox;
       bool test=R1.modifer();
            if(test)
              {
                  ui->Afficher_2->setModel(R1.afficher());

                  player = new QMediaPlayer(this);
                  player->setMedia(QUrl::fromLocalFile("C:/Users/Kazzoro/Desktop/Welcome.mp3"));
                  qDebug() << player->errorString();
                  player->setVolume(100);
                  player->play();

            }
            else
               { msgBox.setText("commande n'exite pas ");


    }
            msgBox.exec();
}*/
 //modifer reservation





void MainWindow::on_ajouterstat_clicked()
{

int ID_stat=ui->ID_stat->text().toInt();
    QString nomfilme=ui->nomfilme->currentText();

    QString datee=ui->le_date->text();
  statistique S1(ID_stat,nomfilme,datee);
 bool test=S1.ajouterstat();
 QMessageBox msgBox;

 if(test)
   {  msgBox.setText("Ajout avec succes.");
     ui->Afficher_2->setModel(R1.afficher());
     msgBox.exec();
 }
 else{
     msgBox.setText("Echec d'ajout");
    msgBox.exec();
}
}

void MainWindow::on_refraiche_clicked()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select nomfilme from movie");
    ui->nomfilme->setModel(model);
}



void MainWindow::on_supprimer_stat_clicked()
{
    statistique S;
    S.setnomfilme(ui->suppfilme->currentText());
       bool test=S.supprimerstat(S.getnomfilme());
       QMessageBox msgBox;

    if(test)
       { msgBox.setText("Suppression avec succes.");
        msgBox.exec();
        player = new QMediaPlayer(this);
        player->setMedia(QUrl::fromLocalFile("C:/Users/LENOVO/Desktop/Welcome (1).mp3"));
        qDebug() << player->errorString();
        player->setVolume(100);
        player->play();
    }
    else{
        msgBox.setText("Echec de suppression");
        msgBox.exec();

}
}

void MainWindow::on_find_clicked()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select nomfilme from stat");
    ui->suppfilme->setModel(model);
}


void MainWindow::on_actualiserStat_clicked()
{
    ui->afficherStat->setModel(S.afficherstat());

}


void MainWindow::on_tier_clicked()
{QString choix=ui->choix->currentText();

    if(ui->choix->currentText()=="AvisP")
    {
        if (ui->cr->isChecked())
        ui->afficherStat->setModel(S.afficheracr());
        else
           ui->afficherStat->setModel(S.afficherdc());

        player = new QMediaPlayer(this);
        player->setMedia(QUrl::fromLocalFile("C:/Users/LENOVO/Desktop/Welcome (1).mp3"));
        qDebug() << player->errorString();
        player->setVolume(100);
        player->play();
    }
    if (ui->choix->currentText()=="AvisN")
    {
        if (ui->cr->isChecked())
        ui->afficherStat->setModel(S.afficheraNcr());
        else ui->afficherStat->setModel(S.afficherNdc());

                player = new QMediaPlayer(this);
                player->setMedia(QUrl::fromLocalFile("C:/Users/LENOVO/Desktop/Welcome (1).mp3"));
                qDebug() << player->errorString();
                player->setVolume(100);
                player->play();

               }
    if (choix=="spectateur")
    {
        if (ui->cr->isChecked())
        ui->afficherStat->setModel(S.afficherspectateurcr());
        else ui->afficherStat->setModel(S.afficherspectateurdc());

                player = new QMediaPlayer(this);
                player->setMedia(QUrl::fromLocalFile("C:/Users/LENOVO/Desktop/Welcome (1).mp3"));
                qDebug() << player->errorString();
                player->setVolume(100);
                player->play();

               }

}


void MainWindow::on_movie_refraiche_2_clicked()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select nomfilme from movie");
    ui->new_movie->setModel(model);
}

void MainWindow::on_pushButton_clicked()
{
    ui->afficherStat->setModel(S.afficherfirst());

}
