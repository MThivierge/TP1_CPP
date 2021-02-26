#include "diete.h"

//Constructeur
Diete::Diete(){
    this->quantite_viande = 0.0;
    this->quantite_fruits = 0.0;
    this->quantite_herbe = 0.0;
}

void Diete::afficherDiete(){
    std::cout<<"\tMange "<< this->quantite_viande <<" kg de viande par jour"<< std::endl;
    std::cout<<"\tMange "<< this->quantite_fruits <<" kg de fruits par jour"<< std::endl;
    std::cout<<"\tMange "<< this->quantite_herbe <<" kg d'herbe par jour"<< std::endl;
}