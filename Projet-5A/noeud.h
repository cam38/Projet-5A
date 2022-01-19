#ifndef NOEUD_H
#define NOEUD_H

#include "thread.h"

class Noeud
{
private :
    string nom ;
    string type ;
    int nbThreads ;
    Thread * listeThreads ;

public:
    Noeud();
    //constructeur de recopie ?
    ~Noeud();

    void setNom(string nom);
    string getNom();

    void setType(string type);
    string getType();

    void setNbThreads(int nbT);
    int getNbThreads();

    void ajouterThread(Thread t);
    void retirerThread(Thread t);

    //generer code ?

};

#endif // NOEUD_H
