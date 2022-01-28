#include "parametragenoeud.h"
#include "ui_parametragenoeud.h"

#include "popupnbthreadsmax.h"

parametrageNoeud::parametrageNoeud(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::parametrageNoeud)
{
    ui->setupUi(this);
}

parametrageNoeud::~parametrageNoeud()
{
    delete ui;
}

Noeud * parametrageNoeud::getNoeud()
{
    return noeud ;
}

//Recuperation du nom du noeud sur le lineEdit
void parametrageNoeud::on_lineEdit_textEdited(const QString &arg1)
{
    nomNoeud = arg1 ;
}

//Recuperation du type du noeud sur le menu déroulant
void parametrageNoeud::on_comboBox_textActivated(const QString &arg1)
{
    typeNoeud = arg1 ;

}

////Recuperation du nombre de thread sur le lineedit
void parametrageNoeud::on_lineEdit_2_textEdited(const QString &arg1)
{
    bool ok ;
    int nbT = arg1.toInt(&ok,10);
    if (ok){
       nbThread = nbT ;
    }

}


void parametrageNoeud::on_pushButton_clicked()
{
    //Si le nombre de thread est supérieur au nombre max, une fenetre pop up apparait
    //Le nombre de thread est alors directement mis au nombre max
    if (nbThread > NB_THREADS_MAX){
        popUpNbThreadsMax ppT(this);
        ppT.exec();
        nbThread = NB_THREADS_MAX ;
        //on crée le noeud avec les informations recueillies
        noeud = new Noeud(nomNoeud,typeNoeud,nbThread);
        this->close();
    }
    else {
        noeud = new Noeud(nomNoeud,typeNoeud,nbThread);
        this->close();
    }
}


