#include "tigre.h"

//Constructeur
Tigre::Tigre(std::string nom, double poids) : 
    Animaux::Animaux(nom, poids) {
        this->diete.setQuantiteViande(poids*5/100);
        std::cout<<"Le tigre "<< this->nom <<" a ete ajoute avec succes."<< std::endl;
}
    
//Affichage
void Tigre::afficherInfos(){
    std::cout<<"Tigre : ";
    Animaux::afficherInfos();
}

//Getters
Diete& Tigre::getDiete(){
    std::cout<<"\tDiete carnivore:"<<std::endl;
    diete.afficherDiete();
    return diete;
}