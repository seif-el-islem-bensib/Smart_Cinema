#include "ajoutmaison.h"
#include "ui_ajoutmaison.h"
#include "maisondeproduction.h"
#include "QMessageBox"

ajoutmaison::ajoutmaison(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajoutmaison)
{
    ui->setupUi(this);
}

ajoutmaison::~ajoutmaison()
{
    delete ui;
}

void ajoutmaison::on_pushButton_clicked()
{
    QString ID_mdp= ui->ID->text();
    QString nom_mdp= ui->NOM->text();
    QString directeur1= ui->DIR->text();

  Maisondeproduction m(ID_mdp,nom_mdp,directeur1);
  bool test=m.ajouter();
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
