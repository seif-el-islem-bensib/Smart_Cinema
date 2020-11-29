#include "modifierfilm.h"
#include "ui_modifierfilm.h"
#include "film.h"
#include "QMessageBox"
Modifierfilm::Modifierfilm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Modifierfilm)
{
    ui->setupUi(this);
}

Modifierfilm::~Modifierfilm()
{
    delete ui;
}

void Modifierfilm::on_modifierfilm_clicked()
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

