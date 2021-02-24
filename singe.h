#ifndef __SINGE_H__
#define __SINGE_H__

#include <iostream>
#include "animaux.h"
#include "diete.h"

class Singe : public Animaux{
    private:
        bool enclos_avec_herbe;
        
    
    public:
        //Constructeur
        Singe(std::string nom, double poids, bool enclos_avec_herbe);
        
        //Affichage
        void afficherSinge();
        
        ~Singe(){};
};

#endif //__SINGE_H__