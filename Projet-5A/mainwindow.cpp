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
    //taille de la fenetre
    setGeometry(50,50,SIZE_X_WINDOW,SIZE_Y_WINDOW);

}

MainWindow::~MainWindow()
{
    delete ui;
}

//méthode liée au bouton nouveau projet dans le menu
void MainWindow::on_actionNouveau_projet_triggered()
{
     //Une fenetre s'ouvre pour régler les paramètres du projet
     parametrageProjet f(this);
     f.exec();

     //On récupère le projet construit dans parametrageProjet
     *p = f.getProjet();

     //Création graphique de tout les noeuds
     creerNoeudsGraphiques();

}

//Methode qui permet de créer des boutons qui correspondent aux noeuds graphiques
void MainWindow::creerNoeudsGraphiques()
{
    int nb_noeuds_ligne = 0 ;
    int num_ligne = 0 ;
    listeNoeudGraphique = new QPushButton * [100];
    QString nomNoeuds("Noeud") ;

    for (int i = 0; i<p->getNbNoeuds() ; i++){

         //nom du noeud (Noeud x)
         nomNoeuds += QString::number(i+1);

         listeNoeudGraphique[i] = new QPushButton(nomNoeuds,this);

         //placeBoutonListe = i ;
         QObject::connect(listeNoeudGraphique[i], SIGNAL(clicked()),this, SLOT(on_pushButtonClicked()));

         nomNoeuds = "Noeud" ;
         listeNoeudGraphique[i]->resize(100, 40); //Bouton de taille (100,40)

         //On rentre dans cette condition si on arrive au bout d'une ligne de noeuds graphiques
         if ((80 + (i-nb_noeuds_ligne)*150)>(SIZE_X_WINDOW-150)){
             num_ligne ++ ;
             nb_noeuds_ligne = i ;
         }

         //emplacement du noeud graphique
         listeNoeudGraphique[i]->setGeometry(80+(i-nb_noeuds_ligne)*150, 80+ num_ligne*120, 100, 40);
         listeNoeudGraphique[i]->show();

    }

}

//Méthode quand on clique sur un noeud graphique
void MainWindow::on_pushButtonClicked()
{

    parametrageNoeud pn(this);
    pn.exec() ;

    Noeud * n = pn.getNoeud();
    cout << "ok1" << endl ;
    p->ajouterNoeuds(n,3);
    cout << "ok2" << endl ;
    //(p->getListeNoeuds())[3]->getNom() ;
    cout << ((p->getListeNoeuds())[3]->getNom()).toStdString() << endl ;


}


