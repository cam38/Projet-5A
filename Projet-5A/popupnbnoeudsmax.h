#ifndef POPUPNBNOEUDSMAX_H
#define POPUPNBNOEUDSMAX_H

#include <QDialog>
#include <QLabel>
#include <string>
#include <QString>
#include <QVBoxLayout>
#include <QPushButton>

#include "projet.h"

namespace Ui {
class popUpNbNoeudsMax;
}

class popUpNbNoeudsMax : public QDialog
{
    Q_OBJECT

public:
    explicit popUpNbNoeudsMax(QWidget *parent = nullptr);
    ~popUpNbNoeudsMax();

private slots:

    void on_pushButton_clicked();

private:
    Ui::popUpNbNoeudsMax *ui;
    QLabel * label ;
    QPushButton * buttonOK ;
    QVBoxLayout * VLayout;

};

#endif // POPUPNBNOEUDSMAX_H
