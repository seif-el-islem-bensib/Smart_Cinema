#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "string"
#include <QMainWindow>
#include "film.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_jouterfm_clicked();



    void on_ajout_maisondeproduction_clicked();

    void on_modifierfilm_clicked();

    void on_pushButton_clicked();

    void on_afficherFilmbButton_clicked();

private:
    Ui::MainWindow *ui;
    Film tmpfilm;
};
#endif // MAINWINDOW_H
