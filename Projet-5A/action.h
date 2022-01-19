#ifndef ACTION_H
#define ACTION_H

#include <iostream>

class Action
{
private :
    int numNoeud();
    int numThread();

public :
    Action();
    // void genererCode()
    // void ecrireAction()

    void setNumNoeud(int numN);
    int getNumNoeud();

    void setNumThread(int numT);
    int getNumThread();

};

#endif // ACTION_H
