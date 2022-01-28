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
        listeThreads[i] = new Thread[NB_ACTIONS_MAX]; // pas sur
    }
}

Noeud::Noeud(const Noeud& n)
{
    nom = n.nom;
    type = n.type ;
    nbThreads = n.nbThreads;
    listeThreads = new Thread * [NB_THREADS_MAX];
    for (int i=0;i<nbThreads;i++)
        listeThreads[i] = n.listeThreads[i];

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

Noeud& Noeud::operator=(const Noeud& n)
{
    if (this != &n)
    {
        delete listeThreads[NB_ACTIONS_MAX];
        nom = n.nom;
        type = n.type ;
        nbThreads = n.nbThreads;
        listeThreads = new Thread * [NB_THREADS_MAX];
        for (int i=0;i<nbThreads;i++)
            listeThreads[i] = n.listeThreads[i];

    }
    return *this ;
}
