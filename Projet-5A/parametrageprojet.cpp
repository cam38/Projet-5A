#include "parametrageprojet.h"
#include "ui_parametrageprojet.h"

using namespace std ;

parametrageProjet::parametrageProjet(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::parametrageProjet)
{
    ui->setupUi(this);
}

parametrageProjet::~parametrageProjet()
{
    delete ui;
}

Projet parametrageProjet::getProjet()
{
    return *proj ;
}


void parametrageProjet::on_lineEdit_textEdited(const QString &arg1)
{
    bool ok ;
    int a = arg1.toInt(&ok,10);
    if (ok){
        nbNoeudsNonValide = a ;
    }

}


//Ajout gestion des erreurs :
//      - nbNoeuds != int
//      - nbNoeuds > nbNoeudMax
void parametrageProjet::on_pushButton_clicked()
{
    if (nbNoeudsNonValide > NB_NOEUDS_MAX){
        popUpNbNoeudsMax p(this);
        p.exec();
    }
    else {
        proj = new Projet(nbNoeudsNonValide);
        this->close();
    }

}





