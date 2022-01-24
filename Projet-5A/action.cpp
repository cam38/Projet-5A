#include "action.h"

Action::Action()
{

}

Action::Action(const Action& a)
{
  numNoeud = a.numNoeud ;
  numThread = a.numThread ;
}

Action& Action::operator=(const Action& a)
{
 if (this != &a)
 {
     numNoeud = a.numNoeud;
     numThread = a.numThread;
 }
 return *this;
}

