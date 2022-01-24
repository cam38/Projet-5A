#include "capteur.h"

Capteur::Capteur()
{

}

Capteur& Capteur::operator=(const Capteur& c)
{
    if (this != &c)
    {
        nom = c.nom ;
        type = c.type ;
        freq.nbTime = c.freq.nbTime ;
        freq.period = c.freq.period ;
        imagePath = c.imagePath ;

    }
    return *this ;
}

