#include "projet.h"
#include "mainwindow.h"

Projet::Projet(){

}

Projet::Projet(int nbN)
{
    nbNoeuds = nbN ;

    int nb_noeuds_ligne = 0 ;
    int num_ligne = 0 ;

    listeNoeuds = new Noeud * [NB_NOEUDS_MAX];
    for (int i = 0 ; i<nbN ; i++){

        if ((80 + (i-nb_noeuds_ligne)*150)>(SIZE_X_WINDOW-150)){
            num_ligne ++ ;
            nb_noeuds_ligne = i ;
        }

        listeNoeuds[i] = new Noeud(80+(i-nb_noeuds_ligne)*150,80+ num_ligne*120);

    }

}

Projet::~Projet()
{

}



int Projet::getNbNoeuds()
{
    return nbNoeuds ;

}

Noeud ** Projet::getListeNoeuds()
{
    return listeNoeuds ;
}

void Projet::ajouterNoeuds(Noeud * n, int i)
{
    listeNoeuds[i] = n ;
}

Noeud * Projet::getNoeudIndice(int indice)
{
    return listeNoeuds[indice];
}

void Projet::afficher(QPainter * p){


    QString nomNoeuds("Noeud") ;


    for (int i = 0 ; i < nbNoeuds ; i++){

       nomNoeuds += QString::number(i+1);
       nomNoeuds = "Noeud" ;

       listeNoeuds[i]->afficher(p,listeNoeuds[i]->getX(),listeNoeuds[i]->getY());

    }


}
