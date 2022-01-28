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

//Recuperation du nombre de noeud
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
void parametrageProjet::on_pushButton_clicked()
{
    //Si le nombre de noeud est supérieur au nombre de noeud max -> fenetre pop up
    //On met alors le nombre de noeud au max
    if (nbNoeudsNonValide > NB_NOEUDS_MAX){
        popUpNbNoeudsMax p(this);
        p.exec();
        nbNoeudsNonValide = NB_NOEUDS_MAX ;
        //creation du projet avec les informations
        proj = new Projet(nbNoeudsNonValide);
        this->close();
    }
    else {
        proj = new Projet(nbNoeudsNonValide);
        this->close();
    }

}





