#include "noeud.h"

Noeud::Noeud()
{
}

Noeud::Noeud(QString nomNoeud, QString typeNoeud, int nbT)
{
    nom = nomNoeud ;
    type = typeNoeud ;
    nbThreads = nbT ;
    listeThreads = new Thread * [NB_THREADS_MAX];
    for (int i = 0 ; i<nbThreads ; i++){
        listeThreads[i] = new Thread[NB_THREADS_MAX]; // pas sur
    }
}

Noeud::~Noeud(){}

void Noeud::setNom(QString nomN)
{
    nom = nomN ;
}

QString Noeud::getNom()
{
    return nom ;
}

void Noeud::setType(QString typeN)
{
    type = typeN ;
}

QString Noeud::getType()
{
    return type ;
}

void Noeud::setNbThreads(int nbT)
{
    nbThreads = nbT ;
}

int Noeud::getNbThreads()
{
    return nbThreads ;
}
