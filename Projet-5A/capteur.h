#ifndef CAPTEUR_H
#define CAPTEUR_H

#include <string>
#include <iostream>

#include <QString>

using namespace std ;

typedef struct   {
     int nbTime ;
     char period ;
}frequence;

class Capteur
{
private:
    QString nom ;
    QString type;
    frequence freq ;
    QString imagePath ;

public:
    Capteur();
    //constructeur de recopie ?

    void setFrequence(int nbT, char period);
    frequence getFrequence();

    void setNom(QString nom);
    QString getNom();

    void setType(QString type);
    QString getType();

    void setImagePath(QString imPath);
    QString getImagePath();

    Capteur& operator=(const Capteur& c);

};


#endif // CAPTEUR_H
