#include "diete.h"

//Constructeur par défaut
Diete::Diete(){
    this->quantite_viande = 0.0;
    this->quantite_fruits = 0.0;
    this->quantite_herbe = 0.0;
}

/*
Diete::Diete(double quantite_viande, double quantite_fruits, double quantite_herbe){
    this->quantite_viande = quantite_viande;
    this->quantite_fruits = quantite_fruits;
    this->quantite_herbe = quantite_herbe;
}
*/

void Diete::afficherDiete(){
    std::cout<<"\tMange "<< this->quantite_viande <<" kg de viande par jour"<< std::endl;
    std::cout<<"\tMange "<< this->quantite_fruits <<" kg de fruits par jour"<< std::endl;
    std::cout<<"\tMange "<< this->quantite_herbe <<" kg d'herbe par jour"<< std::endl;
}