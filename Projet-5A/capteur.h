#ifndef CAPTEUR_H
#define CAPTEUR_H

#include <string>
#include <iostream>

using namespace std ;

typedef struct   {
     int nbTime ;
     char period ;
}frequence;

class Capteur
{
private:
    string nom ;
    string type;
    frequence freq ;
    string imagePath ;

public:
    Capteur();
    //constructeur de recopie ?

    void setFrequence(int nbT, char period);
    frequence getFrequence();

    void setNom(string nom);
    string getNom();

    void setType(string type);
    string getType();

    void setImagePath(string imPath);
    string getImagePath();
};


#endif // CAPTEUR_H
