#include "ajoutfilm.h"
#include "film.h"
#include "ui_ajoutfilm.h"
#include "QMessageBox"


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

void ajoutfilm::on_pushButton_clicked()
{

    QString idf= ui->lineEdit_10->text();
    QString nf= ui->lineEdit_11->text();
    QString idmdp= ui->lineEdit_9->text();
    QString g= ui->lineEdit_8->text();
     int d = ui->lineEdit_7->text().toInt();
     int ns = ui->lineEdit_6->text().toInt();
  Film f(idf,nf,idmdp,g,d,ns);
  bool test=f.ajouter();
  if(test)
{

      //ui->Film->setModel(tmpefilm.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter d'un Film"),
                  QObject::tr("Film ajoutee.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un FIlm"),
                  QObject::tr("Operation Echoue\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);


}


