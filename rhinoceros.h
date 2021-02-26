#ifndef __RHINOCEROS_H__clTabCtrl
#define __RHINOCEROS_H__

#include <iostream>
#include "animaux.h"
#include "diete.h"

class Rhinoceros : public Animaux{
    private:
        int espace_enclos; //En mètres-carrés, minimum 2000 mètres-carrés
    
    public:
        //Constructeur
        Rhinoceros(std::string nom, double poids, int enclos);
        
        //Affichage
        void afficherInfos();
        
        //Getters
        Diete& getDiete();
        
        //Destructeur
        ~Rhinoceros(){
            std::cout<<this->nom<<" a ete enleve"<<std::endl;
        };
};

#endif //__RHINOCEROS_H__