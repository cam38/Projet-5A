#ifndef NOEUD_H
#define NOEUD_H

#include "thread.h"

#include <QString>

const int NB_THREADS_MAX = 20 ;

class Noeud
{
private :
    QString nom ;
    QString type ;
    int nbThreads ;
    Thread ** listeThreads ;

public:
    Noeud() ;
    //Noeud(QString nomNoeud, QString typeNoeud, int nbT);
    //constructeur de recopie ?
    ~Noeud();

    void setNom(QString nom);
    QString getNom();

    void setType(QString type);
    QString getType();

    void setNbThreads(int nbT);
    int getNbThreads();

    void ajouterThread(Thread t);
    void retirerThread(Thread t);

    //generer code ?

};

#endif // NOEUD_H
