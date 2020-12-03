/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *ajouter;
    QGroupBox *groupBox;
    QLineEdit *type;
    QLineEdit *duree;
    QLineEdit *ref;
    QLabel *typepromo;
    QLabel *dureepromo;
    QLabel *refpromo;
    QPushButton *pushButtonajouter;
    QLineEdit *modiftype;
    QLineEdit *modifduree;
    QLineEdit *modierref;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *modifierP;
    QFrame *line;
    QWidget *afficher;
    QTableView *tabP;
    QPushButton *supprimerP;
    QLineEdit *supprimerPpar;
    QPushButton *afficherP;
    QWidget *tab_2;
    QTabWidget *tabWidget_3;
    QWidget *ajouter_2;
    QGroupBox *groupBox_2;
    QLineEdit *id;
    QLineEdit *typet;
    QLineEdit *nbr;
    QLabel *typepromo_2;
    QLabel *dureepromo_2;
    QLabel *refpromo_2;
    QPushButton *pushButtonajouter_2;
    QLineEdit *modifid;
    QLineEdit *modiftypet;
    QLineEdit *modifnbr;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *modifierP_2;
    QFrame *line_2;
    QLabel *label_7;
    QLineEdit *idres;
    QLineEdit *modifidres;
    QLabel *label_8;
    QWidget *afficher_2;
    QTableView *tabP_2;
    QPushButton *supprimerP_2;
    QLineEdit *supprimerPpar_2;
    QPushButton *afficherP_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(871, 553);
        MainWindow->setStyleSheet(QLatin1String("QTabWidget::pane {\n"
"    border: 1px solid black;\n"
"    background: white;\n"
"}\n"
"\n"
"QTabWidget::tab-bar:top {\n"
"    top: 1px;\n"
"}\n"
"\n"
"QTabWidget::tab-bar:bottom {\n"
"    bottom: 1px;\n"
"}\n"
"\n"
"QTabWidget::tab-bar:left {\n"
"    right: 1px;\n"
"}\n"
"\n"
"QTabWidget::tab-bar:right {\n"
"    left: 1px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    border: 1px solid black;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background: white;\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    background: silver;\n"
"}\n"
"\n"
"QTabBar::tab:!selected:hover {\n"
"    background: #999;\n"
"}\n"
"\n"
"QTabBar::tab:top:!selected {\n"
"    margin-top: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:bottom:!selected {\n"
"    margin-bottom: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:top, QTabBar::tab:bottom {\n"
"    min-width: 8ex;\n"
"    margin-right: -1px;\n"
"    padding: 5px 10px 5px 10px;\n"
"}\n"
"\n"
"QTabBar::tab:top:selected {\n"
"    border-bottom-color: none;\n"
"}\n"
"\n"
"QTabBar::tab:bottom:selected {\n"
"    border-top"
                        "-color: none;\n"
"}\n"
"\n"
"QTabBar::tab:top:last, QTabBar::tab:bottom:last,\n"
"QTabBar::tab:top:only-one, QTabBar::tab:bottom:only-one {\n"
"    margin-right: 0;\n"
"}\n"
"\n"
"QTabBar::tab:left:!selected {\n"
"    margin-right: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:right:!selected {\n"
"    margin-left: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:left, QTabBar::tab:right {\n"
"    min-height: 8ex;\n"
"    margin-bottom: -1px;\n"
"    padding: 10px 5px 10px 5px;\n"
"}\n"
"\n"
"QTabBar::tab:left:selected {\n"
"    border-left-color: none;\n"
"}\n"
"\n"
"QTabBar::tab:right:selected {\n"
"    border-right-color: none;\n"
"}\n"
"\n"
"QTabBar::tab:left:last, QTabBar::tab:right:last,\n"
"QTabBar::tab:left:only-one, QTabBar::tab:right:only-one {\n"
"    margin-bottom: 0;\n"
"}\n"
"QTabWidget::pane {\n"
"  border: 1px solid lightgray;\n"
"  top:-1px; \n"
"  background:#34C184; \n"
"} \n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 821, 481));
        tabWidget->setStyleSheet(QLatin1String("QTabWidget::pane {\n"
"    border: 1px solid black;\n"
"    background: white;\n"
"}\n"
"\n"
"QTabWidget::tab-bar:top {\n"
"    top: 1px;\n"
"}\n"
"\n"
"QTabWidget::tab-bar:bottom {\n"
"    bottom: 1px;\n"
"}\n"
"\n"
"QTabWidget::tab-bar:left {\n"
"    right: 1px;\n"
"}\n"
"\n"
"QTabWidget::tab-bar:right {\n"
"    left: 1px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    border: 1px solid black;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background: white;\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    background: silver;\n"
"}\n"
"\n"
"QTabBar::tab:!selected:hover {\n"
"    background: #999;\n"
"}\n"
"\n"
"QTabBar::tab:top:!selected {\n"
"    margin-top: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:bottom:!selected {\n"
"    margin-bottom: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:top, QTabBar::tab:bottom {\n"
"    min-width: 8ex;\n"
"    margin-right: -1px;\n"
"    padding: 5px 10px 5px 10px;\n"
"}\n"
"\n"
"QTabBar::tab:top:selected {\n"
"    border-bottom-color: none;\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(40, 20, 741, 411));
        tabWidget_2->setStyleSheet(QLatin1String("QTabWidget::pane {\n"
"  border: 1px solid lightgray;\n"
"  top:-1px; \n"
"  background:#34C184; \n"
"} \n"
""));
        ajouter = new QWidget();
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setTabletTracking(false);
        groupBox = new QGroupBox(ajouter);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 701, 341));
        groupBox->setStyleSheet(QLatin1String("QTabWidget::pane {\n"
"    border: 1px solid black;\n"
"    background: white;\n"
"}\n"
"\n"
"QTabWidget::tab-bar:top {\n"
"    top: 1px;\n"
"}\n"
"\n"
"QTabWidget::tab-bar:bottom {\n"
"    bottom: 1px;\n"
"}\n"
"\n"
"QTabWidget::tab-bar:left {\n"
"    right: 1px;\n"
"}\n"
"\n"
"QTabWidget::tab-bar:right {\n"
"    left: 1px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    border: 1px solid black;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background: white;\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    background: silver;\n"
"}\n"
"\n"
"QTabBar::tab:!selected:hover {\n"
"    background: #999;\n"
"}\n"
"\n"
"QTabBar::tab:top:!selected {\n"
"    margin-top: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:bottom:!selected {\n"
"    margin-bottom: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:top, QTabBar::tab:bottom {\n"
"    min-width: 8ex;\n"
"    margin-right: -1px;\n"
"    padding: 5px 10px 5px 10px;\n"
"}\n"
"\n"
"QTabBar::tab:top:selected {\n"
"    border-bottom-color: none;\n"
"}\n"
"\n"
"QTabBar::tab:bottom:selected {\n"
"    border-top"
                        "-color: none;\n"
"}\n"
"\n"
"QTabBar::tab:top:last, QTabBar::tab:bottom:last,\n"
"QTabBar::tab:top:only-one, QTabBar::tab:bottom:only-one {\n"
"    margin-right: 0;\n"
"}\n"
"\n"
"QTabBar::tab:left:!selected {\n"
"    margin-right: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:right:!selected {\n"
"    margin-left: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:left, QTabBar::tab:right {\n"
"    min-height: 8ex;\n"
"    margin-bottom: -1px;\n"
"    padding: 10px 5px 10px 5px;\n"
"}\n"
"\n"
"QTabBar::tab:left:selected {\n"
"    border-left-color: none;\n"
"}\n"
"\n"
"QTabBar::tab:right:selected {\n"
"    border-right-color: none;\n"
"}\n"
"\n"
"QTabBar::tab:left:last, QTabBar::tab:right:last,\n"
"QTabBar::tab:left:only-one, QTabBar::tab:right:only-one {\n"
"    margin-bottom: 0;\n"
"}\n"
"QTabWidget::pane {\n"
"  border: 1px solid lightgray;\n"
"  top:-1px; \n"
"  background:#34C184; \n"
"} \n"
""));
        type = new QLineEdit(groupBox);
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(180, 60, 113, 22));
        duree = new QLineEdit(groupBox);
        duree->setObjectName(QStringLiteral("duree"));
        duree->setGeometry(QRect(180, 120, 113, 22));
        ref = new QLineEdit(groupBox);
        ref->setObjectName(QStringLiteral("ref"));
        ref->setGeometry(QRect(180, 170, 113, 22));
        typepromo = new QLabel(groupBox);
        typepromo->setObjectName(QStringLiteral("typepromo"));
        typepromo->setGeometry(QRect(40, 60, 91, 16));
        dureepromo = new QLabel(groupBox);
        dureepromo->setObjectName(QStringLiteral("dureepromo"));
        dureepromo->setGeometry(QRect(40, 120, 101, 16));
        refpromo = new QLabel(groupBox);
        refpromo->setObjectName(QStringLiteral("refpromo"));
        refpromo->setGeometry(QRect(40, 170, 121, 16));
        pushButtonajouter = new QPushButton(groupBox);
        pushButtonajouter->setObjectName(QStringLiteral("pushButtonajouter"));
        pushButtonajouter->setGeometry(QRect(120, 260, 111, 41));
        modiftype = new QLineEdit(groupBox);
        modiftype->setObjectName(QStringLiteral("modiftype"));
        modiftype->setGeometry(QRect(570, 60, 113, 22));
        modifduree = new QLineEdit(groupBox);
        modifduree->setObjectName(QStringLiteral("modifduree"));
        modifduree->setGeometry(QRect(570, 120, 113, 22));
        modierref = new QLineEdit(groupBox);
        modierref->setObjectName(QStringLiteral("modierref"));
        modierref->setGeometry(QRect(570, 180, 113, 22));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(370, 60, 171, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(370, 120, 191, 20));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(360, 180, 201, 20));
        modifierP = new QPushButton(groupBox);
        modifierP->setObjectName(QStringLiteral("modifierP"));
        modifierP->setGeometry(QRect(490, 260, 111, 41));
        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(330, 20, 16, 301));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        tabWidget_2->addTab(ajouter, QString());
        afficher = new QWidget();
        afficher->setObjectName(QStringLiteral("afficher"));
        tabP = new QTableView(afficher);
        tabP->setObjectName(QStringLiteral("tabP"));
        tabP->setGeometry(QRect(40, 20, 571, 241));
        supprimerP = new QPushButton(afficher);
        supprimerP->setObjectName(QStringLiteral("supprimerP"));
        supprimerP->setGeometry(QRect(540, 330, 93, 28));
        supprimerPpar = new QLineEdit(afficher);
        supprimerPpar->setObjectName(QStringLiteral("supprimerPpar"));
        supprimerPpar->setGeometry(QRect(410, 330, 113, 22));
        afficherP = new QPushButton(afficher);
        afficherP->setObjectName(QStringLiteral("afficherP"));
        afficherP->setGeometry(QRect(540, 280, 93, 28));
        tabWidget_2->addTab(afficher, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_3 = new QTabWidget(tab_2);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(50, 10, 741, 411));
        tabWidget_3->setStyleSheet(QLatin1String("QTabWidget::pane {\n"
"  border: 1px solid lightgray;\n"
"  top:-1px; \n"
"  background:#34C184; \n"
"} \n"
""));
        ajouter_2 = new QWidget();
        ajouter_2->setObjectName(QStringLiteral("ajouter_2"));
        ajouter_2->setTabletTracking(false);
        groupBox_2 = new QGroupBox(ajouter_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 10, 701, 341));
        groupBox_2->setStyleSheet(QLatin1String("QTabWidget::pane {\n"
"    border: 1px solid black;\n"
"    background: white;\n"
"}\n"
"\n"
"QTabWidget::tab-bar:top {\n"
"    top: 1px;\n"
"}\n"
"\n"
"QTabWidget::tab-bar:bottom {\n"
"    bottom: 1px;\n"
"}\n"
"\n"
"QTabWidget::tab-bar:left {\n"
"    right: 1px;\n"
"}\n"
"\n"
"QTabWidget::tab-bar:right {\n"
"    left: 1px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    border: 1px solid black;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background: white;\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    background: silver;\n"
"}\n"
"\n"
"QTabBar::tab:!selected:hover {\n"
"    background: #999;\n"
"}\n"
"\n"
"QTabBar::tab:top:!selected {\n"
"    margin-top: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:bottom:!selected {\n"
"    margin-bottom: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:top, QTabBar::tab:bottom {\n"
"    min-width: 8ex;\n"
"    margin-right: -1px;\n"
"    padding: 5px 10px 5px 10px;\n"
"}\n"
"\n"
"QTabBar::tab:top:selected {\n"
"    border-bottom-color: none;\n"
"}\n"
"\n"
"QTabBar::tab:bottom:selected {\n"
"    border-top"
                        "-color: none;\n"
"}\n"
"\n"
"QTabBar::tab:top:last, QTabBar::tab:bottom:last,\n"
"QTabBar::tab:top:only-one, QTabBar::tab:bottom:only-one {\n"
"    margin-right: 0;\n"
"}\n"
"\n"
"QTabBar::tab:left:!selected {\n"
"    margin-right: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:right:!selected {\n"
"    margin-left: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:left, QTabBar::tab:right {\n"
"    min-height: 8ex;\n"
"    margin-bottom: -1px;\n"
"    padding: 10px 5px 10px 5px;\n"
"}\n"
"\n"
"QTabBar::tab:left:selected {\n"
"    border-left-color: none;\n"
"}\n"
"\n"
"QTabBar::tab:right:selected {\n"
"    border-right-color: none;\n"
"}\n"
"\n"
"QTabBar::tab:left:last, QTabBar::tab:right:last,\n"
"QTabBar::tab:left:only-one, QTabBar::tab:right:only-one {\n"
"    margin-bottom: 0;\n"
"}\n"
"QTabWidget::pane {\n"
"  border: 1px solid lightgray;\n"
"  top:-1px; \n"
"  background:#34C184; \n"
"} \n"
""));
        id = new QLineEdit(groupBox_2);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(180, 60, 113, 22));
        typet = new QLineEdit(groupBox_2);
        typet->setObjectName(QStringLiteral("typet"));
        typet->setGeometry(QRect(180, 120, 113, 22));
        nbr = new QLineEdit(groupBox_2);
        nbr->setObjectName(QStringLiteral("nbr"));
        nbr->setGeometry(QRect(180, 170, 113, 22));
        typepromo_2 = new QLabel(groupBox_2);
        typepromo_2->setObjectName(QStringLiteral("typepromo_2"));
        typepromo_2->setGeometry(QRect(40, 60, 91, 16));
        dureepromo_2 = new QLabel(groupBox_2);
        dureepromo_2->setObjectName(QStringLiteral("dureepromo_2"));
        dureepromo_2->setGeometry(QRect(40, 120, 101, 16));
        refpromo_2 = new QLabel(groupBox_2);
        refpromo_2->setObjectName(QStringLiteral("refpromo_2"));
        refpromo_2->setGeometry(QRect(40, 170, 121, 16));
        pushButtonajouter_2 = new QPushButton(groupBox_2);
        pushButtonajouter_2->setObjectName(QStringLiteral("pushButtonajouter_2"));
        pushButtonajouter_2->setGeometry(QRect(110, 270, 111, 41));
        modifid = new QLineEdit(groupBox_2);
        modifid->setObjectName(QStringLiteral("modifid"));
        modifid->setGeometry(QRect(570, 60, 113, 22));
        modiftypet = new QLineEdit(groupBox_2);
        modiftypet->setObjectName(QStringLiteral("modiftypet"));
        modiftypet->setGeometry(QRect(570, 120, 113, 22));
        modifnbr = new QLineEdit(groupBox_2);
        modifnbr->setObjectName(QStringLiteral("modifnbr"));
        modifnbr->setGeometry(QRect(570, 180, 113, 22));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(390, 60, 171, 20));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(390, 120, 191, 20));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(390, 180, 201, 20));
        modifierP_2 = new QPushButton(groupBox_2);
        modifierP_2->setObjectName(QStringLiteral("modifierP_2"));
        modifierP_2->setGeometry(QRect(490, 270, 111, 41));
        line_2 = new QFrame(groupBox_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(330, 20, 16, 301));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 220, 111, 16));
        idres = new QLineEdit(groupBox_2);
        idres->setObjectName(QStringLiteral("idres"));
        idres->setGeometry(QRect(180, 220, 113, 22));
        modifidres = new QLineEdit(groupBox_2);
        modifidres->setObjectName(QStringLiteral("modifidres"));
        modifidres->setGeometry(QRect(570, 220, 113, 22));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(390, 230, 151, 16));
        tabWidget_3->addTab(ajouter_2, QString());
        afficher_2 = new QWidget();
        afficher_2->setObjectName(QStringLiteral("afficher_2"));
        tabP_2 = new QTableView(afficher_2);
        tabP_2->setObjectName(QStringLiteral("tabP_2"));
        tabP_2->setGeometry(QRect(40, 20, 571, 241));
        supprimerP_2 = new QPushButton(afficher_2);
        supprimerP_2->setObjectName(QStringLiteral("supprimerP_2"));
        supprimerP_2->setGeometry(QRect(540, 330, 93, 28));
        supprimerPpar_2 = new QLineEdit(afficher_2);
        supprimerPpar_2->setObjectName(QStringLiteral("supprimerPpar_2"));
        supprimerPpar_2->setGeometry(QRect(410, 330, 113, 22));
        afficherP_2 = new QPushButton(afficher_2);
        afficherP_2->setObjectName(QStringLiteral("afficherP_2"));
        afficherP_2->setGeometry(QRect(540, 280, 93, 28));
        tabWidget_3->addTab(afficher_2, QString());
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 871, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Ajout", Q_NULLPTR));
        typepromo->setText(QApplication::translate("MainWindow", "Type promotion", Q_NULLPTR));
        dureepromo->setText(QApplication::translate("MainWindow", "Duree promotion", Q_NULLPTR));
        refpromo->setText(QApplication::translate("MainWindow", "Reference promotion", Q_NULLPTR));
        pushButtonajouter->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Modofier le type de promotion", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Modifier la duree de promotion", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Modifier la reference de promotion", Q_NULLPTR));
        modifierP->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(ajouter), QApplication::translate("MainWindow", "Ajouter/Modifier une promotion", Q_NULLPTR));
        supprimerP->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        afficherP->setText(QApplication::translate("MainWindow", "refresh", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(afficher), QApplication::translate("MainWindow", "Afficher une promotion", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Promotion", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Ajout", Q_NULLPTR));
        typepromo_2->setText(QApplication::translate("MainWindow", "Id ticket", Q_NULLPTR));
        dureepromo_2->setText(QApplication::translate("MainWindow", "Type ticket", Q_NULLPTR));
        refpromo_2->setText(QApplication::translate("MainWindow", "Nombre tickets", Q_NULLPTR));
        pushButtonajouter_2->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Modofier Id ticket", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Modifierle Type du ticket", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Modifier le nombre de tickets", Q_NULLPTR));
        modifierP_2->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Id responsable", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Modifier Id du responsable", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(ajouter_2), QApplication::translate("MainWindow", "Ajouter/Modifier une promotion", Q_NULLPTR));
        supprimerP_2->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        afficherP_2->setText(QApplication::translate("MainWindow", "refresh", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(afficher_2), QApplication::translate("MainWindow", "Afficher une promotion", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Ticket", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
