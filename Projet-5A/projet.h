#ifndef PROJET_H
#define PROJET_H

#include "noeud.h"

class Projet
{
private :
    int nbNoeuds ;
    Noeud * noeud ;

public:
    Projet();
    //constructeur de recopie ?
    ~Projet();

    void setNbNoeuds(int nbN);
    int getNbNoeuds();

    void ajouterNoeuds(Noeud n);
    void retirerNoeuds(Noeud n);

    //void genererCode()
};

#endif // PROJET_H
