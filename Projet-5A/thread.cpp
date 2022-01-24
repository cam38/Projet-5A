#include "thread.h"

Thread::Thread()
{

}

Thread::Thread(const Thread& t)
{

    numNoeud = t.numNoeud ;
    nbActionAssociees = t.nbActionAssociees ;
    capteur = t.capteur ;
    listeActions = new Action[NB_ACTIONS_MAX];
    for (int i=0;i<nbActionAssociees;i++)
        listeActions[i] = t.listeActions[i];
}

Thread::~Thread()
{

}

Thread& Thread::operator=(const Thread& t)
{
    if (this != &t)
    {
    delete[] listeActions;
    numNoeud = t.numNoeud ;
    nbActionAssociees = t.nbActionAssociees ;
    capteur = t.capteur ;
    listeActions = new Action[NB_ACTIONS_MAX];
    for (int i=0;i<nbActionAssociees;i++)
        listeActions[i] = t.listeActions[i];
    }
    return *this ;
}
