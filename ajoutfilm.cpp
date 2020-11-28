/*#include "ajoutfilm.h"
#include "film.h"
#include "QMessageBox"
#include "ui_ajoutfilm.h"



ajoutfilm::ajoutfilm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajoutfilm)
{
    ui->setupUi(this);
}

ajoutfilm::~ajoutfilm()
{
    delete ui;
}

/*void ajoutfilm::on_pushButton_clicked()
{

    QString IDfilm= ui->lineEdit_10->text();
    QString Nomfilm= ui->lineEdit_11->text();
    QString IDmdp= ui->lineEdit_9->text();
    QString Genre= ui->lineEdit_8->text();
     int duree = ui->lineEdit_7->text().toInt();
     int numsalle = ui->lineEdit_6->text().toInt();
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
*/




