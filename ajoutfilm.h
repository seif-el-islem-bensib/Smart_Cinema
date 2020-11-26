#ifndef AJOUTFILM_H
#define AJOUTFILM_H

#include <QDialog>

namespace Ui {
class ajoutfilm;
}

class ajoutfilm : public QDialog
{
    Q_OBJECT

public:
    explicit ajoutfilm(QWidget *parent = nullptr);
    ~ajoutfilm();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ajoutfilm *ui;
};

#endif // AJOUTFILM_H
