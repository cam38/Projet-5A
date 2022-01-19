#ifndef PROJET_H
#define PROJET_H

#include "noeud.h"

const int NB_NOEUDS_MAX = 20 ;

class Projet
{
private :
    int nbNoeuds ;
    Noeud ** listeNoeuds ;

public:
    Projet(int nbN);
    //constructeur de recopie ?
    //~Projet();

    //void setNbNoeuds(int nbN);
    int getNbNoeuds();

    //void ajouterNoeuds(Noeud n);
    //void retirerNoeuds(Noeud n);

    //void genererCode()
};

#endif // PROJET_H
