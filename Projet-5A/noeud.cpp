#include "noeud.h"
#include "mainwindow.h"

Noeud::Noeud(int xN, int yN)
{
    x = xN ;
    y = yN ;
    image = new QImage(50,50,QImage::Format_ARGB32);
    image->load("C:/Users/camil/OneDrive/Documents/GMM5A/Projet/Projet-5A/node.png");
}


Noeud::Noeud(QString nomNoeud, QString typeNoeud, int nbT)
{
    nom = nomNoeud ;
    type = typeNoeud ;
    nbThreads = nbT ;
    listeThreads = new Thread * [NB_THREADS_MAX];
    image = new QImage(70,70,QImage::Format_ARGB32);
    image->load("node.png");
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

int Noeud::getX()
{
    return x ;
}

int Noeud::getY()
{
    return y ;
}

Noeud& Noeud::operator=(const Noeud& n)
{
    if (this != &n)
    {
        delete listeThreads[NB_ACTIONS_MAX];
        nom = n.nom;
        type = n.type ;
        nbThreads = n.nbThreads;
        x = n.x ;
        y = n.y ;
        image = n.image ;
        listeThreads = new Thread * [NB_THREADS_MAX];
        for (int i=0;i<nbThreads;i++)
            listeThreads[i] = n.listeThreads[i];

    }
    return *this ;
}

void Noeud::afficher(QPainter * p, int x, int y){

    QImage * image = new QImage(50,50,QImage::Format_ARGB32);
    image->load("C:/Users/camil/OneDrive/Documents/GMM5A/Projet/Projet-5A/node.png");

    p->drawImage(QRect(x,y,50,50),*image);

}
