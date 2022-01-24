#include "projet.h"

Projet::Projet(int nbN)
{
    nbNoeuds = nbN ;
    listeNoeuds = new Noeud * [NB_NOEUDS_MAX];
    for (int i = 0 ; i<nbN ; i++){
        listeNoeuds[i] = new Noeud[NB_THREADS_MAX];
    }

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
