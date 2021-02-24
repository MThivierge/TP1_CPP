#ifndef __ANIMAUX_H__
#define __ANIMAUX_H__

#include <iostream>
#include "diete.h"

class Animaux{
protected:
    std::string nom; //Sans espaces
    double poids; //En kilogrammes
    Diete diete;
    
    
public:
    //Constructeur avec paramètres
    Animaux(std::string nom, double poids);
    
    //Getters
    Diete& getDiete(){
        return diete;
    }
    
    virtual ~Animaux(){};
};

#endif //__ANIMAUX_H__