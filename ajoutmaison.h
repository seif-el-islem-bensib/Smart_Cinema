#ifndef AJOUTMAISON_H
#define AJOUTMAISON_H

#include <QDialog>

namespace Ui {
class ajoutmaison;
}

class ajoutmaison : public QDialog
{
    Q_OBJECT

public:
    explicit ajoutmaison(QWidget *parent = nullptr);
    ~ajoutmaison();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ajoutmaison *ui;
};

#endif // AJOUTMAISON_H
