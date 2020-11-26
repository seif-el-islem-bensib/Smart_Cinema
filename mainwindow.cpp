#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include "reservation.h"
#include "connexion.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_hkjhk_clicked()
{
    int  res;
     ajouter_une_reservation mw(this);
         mw.setWindowTitle("Employee Capture");

         res = mw.exec();
         if (res == QDialog::Rejected)
             return;
}
