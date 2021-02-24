#ifndef __TIGRE_H__
#define __TIGRE_H__

#include <iostream>
#include "animaux.h"
#include "diete.h"

class Tigre : public Animaux{  
    public:
        //Constructeur
        Tigre(std::string nom, double poids);
        
        //Affichage
        void afficherTigre();
        
        //Destructeur
        ~Tigre(){};
};

#endif //__TIGRE_H__