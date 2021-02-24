#include "animaux.h"

//Constructeur
Animaux::Animaux(std::string nom, double poids){
    this->nom = nom;
    this->poids = poids;
}

//Affichage
void Animaux::afficherInfos(){
    std::cout<< nom <<" ("<<poids<<" kg)"<<std::endl;
}