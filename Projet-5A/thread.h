#ifndef THREAD_H
#define THREAD_H

#include "capteur.h"
#include "action.h"

class Thread
{
private :
    int numNoeud ;
    int nbActionAssociees ;
    Capteur capteur ;
    Action * listeActions ;

public:
    Thread();
    //constructeur de recopie ?
    ~Thread();

    void setNumNoeud(int numN);
    int getNumNoeud();

    void setNbActionsAssociees(int numA);
    int getNbActionsAssociees();

    void setCapteur(Capteur capt);
    Capteur getCapteur();

    void ajouterAction(Action a);
    void retirerAction(Action a);

    // genererCode()
};

#endif // THREAD_H
