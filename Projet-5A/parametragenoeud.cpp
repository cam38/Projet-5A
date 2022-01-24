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


void parametrageNoeud::on_lineEdit_textEdited(const QString &arg1)
{
    nomNoeud = arg1 ;
}

void parametrageNoeud::on_comboBox_textActivated(const QString &arg1)
{
    typeNoeud = arg1 ;

}


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
    if (nbThread > NB_THREADS_MAX){
        popUpNbThreadsMax ppT(this);
        ppT.exec();
        nbThread = NB_THREADS_MAX ;
        noeud = new Noeud(nomNoeud,typeNoeud,nbThread);
        //noeud = new Noeud();
        this->close();
    }
    else {
        noeud = new Noeud(nomNoeud,typeNoeud,nbThread);
        //noeud = new Noeud();
        this->close();
    }
}


