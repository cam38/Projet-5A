    #ifndef ACTION_H
#define ACTION_H

#include <iostream>

const int NB_ACTIONS_MAX = 20 ;

class Action
{
private :
    int numNoeud;
    int numThread;

public :
    Action();
    Action(const Action& a);
    // void genererCode()
    // void ecrireAction()

    void setNumNoeud(int numN);
    int getNumNoeud();

    void setNumThread(int numT);
    int getNumThread();

    Action& operator=(const Action& e);


};

#endif // ACTION_H
