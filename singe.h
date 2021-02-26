#ifndef __SINGE_H__
#define __SINGE_H__

#include <iostream>
#include "animaux.h"

class Singe : public Animaux{
    private:
        bool enclos_avec_herbe;
        
    public:
        //Constructeur
        Singe(std::string nom, double poids, bool enclos_avec_herbe);
        
        //Affichage
        void afficherInfos();
        
        //Getters
        Diete& getDiete();
        
        //Destructeur
        ~Singe(){
            std::cout<<this->nom<<" a ete enleve du parc."<<std::endl;
        };
};

#endif //__SINGE_H__