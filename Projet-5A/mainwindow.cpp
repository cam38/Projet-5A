#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "parametrageprojet.h"
#include "parametragenoeud.h"

#include <iostream>

using namespace std ;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setGeometry(50,50,SIZE_X_WINDOW,SIZE_Y_WINDOW);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNouveau_projet_triggered()
{
     parametrageProjet f(this);
     f.exec();

     *p = f.getProjet();
     cout << "ok" << endl ;


     //Création graphique de tout les noeuds
     creerNoeudsGraphiques();

}

//GERER LE CAS DU NOMBRE DE NOEUD QUI DEPASSE LE CADRE DE LA FENETRE
void MainWindow::creerNoeudsGraphiques()
{
    int nb_noeuds_ligne = 0 ;
    int num_ligne = 0 ;
    listeNoeudGraphique = new QPushButton * [100];
    QString nomNoeuds("Noeud") ;

    for (int i = 0; i<p->getNbNoeuds() ; i++){

         nomNoeuds += QString::number(i+1);

         listeNoeudGraphique[i] = new QPushButton(nomNoeuds,this);
         QObject::connect(listeNoeudGraphique[i], SIGNAL(clicked()),this, SLOT(on_pushButtonClicked()));

         nomNoeuds = "Noeud" ;
         listeNoeudGraphique[i]->resize(100, 40);

         if ((80 + (i-nb_noeuds_ligne)*150)>(SIZE_X_WINDOW-150)){
             num_ligne ++ ;
             nb_noeuds_ligne = i ;
         }

         listeNoeudGraphique[i]->setGeometry(80+(i-nb_noeuds_ligne)*150, 80+ num_ligne*120, 100, 40);
         listeNoeudGraphique[i]->show();

    }

}

void MainWindow::on_pushButtonClicked()
{
    parametrageNoeud pn(this);
    pn.exec() ;

    *n = pn.getNoeud();

    cout << n->getNbThreads() << endl ;
    cout << n->getNom().toStdString() << endl ;
    cout <<  n->getType().toStdString() << endl ;
}


