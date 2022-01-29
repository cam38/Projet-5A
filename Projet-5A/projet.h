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
    Projet();
    Projet(int nbN);
    //constructeur de recopie ?
    ~Projet();

    //void setNbNoeuds(int nbN);
    int getNbNoeuds();

    Noeud ** getListeNoeuds();

    void ajouterNoeuds(Noeud * n, int i);

    Noeud * getNoeudIndice(int indice);
    //void retirerNoeuds(Noeud n);

    void afficher(QPainter * p);



    //void genererCode()
};

#endif // PROJET_H
