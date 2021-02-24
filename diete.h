#ifndef __DIETE_H__
#define __DIETE_H__

#include<iostream>

class Diete{
    private:
        //Les quantitées sont en kilogrammes
        double quantite_viande;
        double quantite_fruits;
        double quantite_herbe;
        
    public:
        //Constructeur par défaut
        Diete();
        //Constructeur avec paramètres
        //Diete(double quantite_viande, double quantite_fruits, double quantite_herbe);
        
        //Affichage
        void afficherDiete();
        
        //Getters
        double getQuantiteViande() {
            return quantite_viande;
        }
        
        double getQuantiteFruits() {
            return quantite_fruits;
        }
        
        double getQuantiteHerbe() {
            return quantite_herbe;
        }
        
        //Setters
        void setQuantiteViande(double quantite_viande) {
            this->quantite_viande = quantite_viande;
        }
        
        void setQuantiteFruits(double quantite_fruits) {
            this->quantite_fruits = quantite_fruits;
        }
        
        void setQuantiteHerbe(double quantite_herbe) {
            this->quantite_herbe = quantite_herbe;
        }
        
        //Destructeur
        ~Diete(){
            //std::cout<<"Objet Diete detruit"<<std::endl;
        }
};

#endif //__DIETE_H__