#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "parametrageprojet.h"

#include <iostream>

using namespace std ;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

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

     //Création graphique de tout les noeuds
     creerNoeuds();

}

//GERER LE CAS DU NOMBRE DE NOEUD QUI DEPASSE LE CADRE DE LA FENETRE
void MainWindow::creerNoeuds()
{

    listeNoeudGraphique = new QPushButton * [100];
    QString nomNoeuds("Noeud") ;

    for (int i = 0; i<p->getNbNoeuds() ; i++){

         nomNoeuds += QString::number(i+1);
         listeNoeudGraphique[i] = new QPushButton(nomNoeuds,this);
         nomNoeuds = "Noeud" ;
         listeNoeudGraphique[i]->resize(100, 40);
         listeNoeudGraphique[i]->setGeometry(100+i*150, 100, 100, 40);
         listeNoeudGraphique[i]->show();

    }

}


