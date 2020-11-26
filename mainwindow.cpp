#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "film.h"
#include "maisondeproduction.h"
#include "connection.h"
#include <QMessageBox>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include "ajoutfilm.h"


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
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_hkjhk_8_clicked()
{

}

void MainWindow::on_hkjhk_clicked()
{
    int  res;
     ajoutfilm mw(this);
         mw.setWindowTitle("Employee Capture");

         res = mw.exec();
         if (res == QDialog::Rejected)
             return;
}
