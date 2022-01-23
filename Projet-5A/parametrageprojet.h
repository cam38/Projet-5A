#ifndef PARAMETRAGEPROJET_H
#define PARAMETRAGEPROJET_H

#include <QDialog>
#include <QCloseEvent>

#include "projet.h"
#include "popupnbnoeudsmax.h"


#include <iostream>


namespace Ui {
class parametrageProjet;
}

class parametrageProjet : public QDialog
{
    Q_OBJECT

public:
    explicit parametrageProjet(QWidget *parent = nullptr);
    ~parametrageProjet();

    Projet getProjet() ;

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_pushButton_clicked();


private:
    Ui::parametrageProjet *ui;
    Projet * proj ;
    int nbNoeudsNonValide = 0 ;
};

#endif // PARAMETRAGEPROJET_H
