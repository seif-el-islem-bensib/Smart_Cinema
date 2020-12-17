#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "reservation.h"
#include <QMainWindow>
#include "stat.h"
#include "connexion.h"
#include <QMediaPlayer>
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
    void on_ajouter_clicked();

    void on_close_clicked();

    void on_affichebutton_clicked();
    //void on_pushButton_6_clicked();

    void on_movie_refraiche_clicked();

    void on_supp_2_clicked();

    void on_ajouterstat_clicked();

    void on_refraiche_clicked();



   void on_supprimer_stat_clicked();

    void on_find_clicked();


    void on_actualiserStat_clicked();

    void on_tier_clicked();

    void on_movie_refraiche_2_clicked();

    void on_pushButton_clicked();

private:

    Ui::MainWindow *ui;
reservation R1;
statistique S;
QMediaPlayer * player;
};
#endif // MAINWINDOW_H
