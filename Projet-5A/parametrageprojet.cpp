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

void parametrageProjet::on_lineEdit_textEdited(const QString &arg1)
{
    bool ok ;
    int a = arg1.toInt(&ok,10);
    if (ok){
        nbNoeudsNonValide = a ;
    }

}


void parametrageProjet::on_pushButton_clicked()
{
    p = new Projet(nbNoeudsNonValide);
    cout << p->getNbNoeuds() << endl ;
}

