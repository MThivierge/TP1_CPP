#include "singe.h"

//Constructeur
Singe::Singe(std::string nom, double poids, bool enclos_avec_herbe) : 
    Animaux::Animaux(nom, poids) {
        this->enclos_avec_herbe = enclos_avec_herbe;
        this->diete.setQuantiteViande(poids*1/100);
        this->diete.setQuantiteFruits(poids*1/100);
        
        if(!enclos_avec_herbe){
            this->diete.setQuantiteHerbe(poids*0.5/100);
        }
        
        std::cout<<"Le singe "<< this->nom <<" a ete ajoute avec succes."<< std::endl;
}
    
//Affichage
void Singe::afficherInfos(){
    std::cout<<"Singe : ";
    Animaux::afficherInfos();
    
    if(enclos_avec_herbe){
        std::cout<<"\tEnclos avec herbe"<<std::endl;
    }
    else{
        std::cout<<"\tEnclos sans herbe"<<std::endl;
    }
}

//Getters
Diete& Singe::getDiete(){
    std::cout<<"\tDiete omnivore:"<<std::endl;
    diete.afficherDiete();
    return diete;
}