#ifndef NOEUD_H
#define NOEUD_H

#include "thread.h"

#include <QString>
#include <QImage>
#include <QLabel>
#include <QPixmap>
#include <QPainter>

const int NB_THREADS_MAX = 20 ;

class Noeud
{
private :
    QString nom ;
    QString type ;
    int nbThreads ;
    Thread ** listeThreads ;

    //Graphique
    int x ;
    int y ;
    QImage * image ;

public:

    Noeud(int xN, int yN) ;
    Noeud(QString nomNoeud, QString typeNoeud, int nbT);
    Noeud(const Noeud& n);
    ~Noeud();

    void setNom(QString nom);
    QString getNom();

    void setType(QString type);
    QString getType();

    void setNbThreads(int nbT);
    int getNbThreads();

    int getX();
    int getY();

    void ajouterThread(Thread t);
    void retirerThread(Thread t);

    void afficher(QPainter * p, int x, int y);

    Noeud& operator=(const Noeud& n);

    //generer code ?

};

#endif // NOEUD_H
