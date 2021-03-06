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
    //Constructeur
    Animaux(std::string nom, double poids);
    
    //Affichage
    virtual void afficherInfos();
    
    //Getters
    virtual Diete& getDiete(){
        return diete;
    }
    
    std::string getNom(){
        return nom;
    }
    
    //Destructeur
    virtual ~Animaux(){}
};

#endif //__ANIMAUX_H__