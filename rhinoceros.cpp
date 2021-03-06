#include "rhinoceros.h"

//Constructeur
Rhinoceros::Rhinoceros(std::string nom, double poids, int espace_enclos) :
    Animaux::Animaux(nom, poids) {
        double herbe_a_fournir;
        
        if(espace_enclos<2000){
            this->espace_enclos = 2000;
        }
        else{
            this->espace_enclos = espace_enclos;
        }
        
        this->diete.setQuantiteFruits(poids*0.5/100);
        
        //Calcul pour la quantité d'herbe à fournir en plus: (poids*2%)-((10kg / 1000 mètres-carrés) * espace_enclos)
        herbe_a_fournir = poids*2/100-10.0/1000*this->espace_enclos;
        
        if(herbe_a_fournir>0.0){
            this->diete.setQuantiteHerbe(herbe_a_fournir);
        }
        
        std::cout<<"Le rhinoceros "<< this->nom <<" a ete ajoute avec succes."<< std::endl;
}

//Affichage
void Rhinoceros::afficherInfos(){
    std::cout<<"Rhinoceros : ";
    Animaux::afficherInfos();
    std::cout<<"\tEnclos de "<< espace_enclos <<" metres-carres"<<std::endl;
}

//Getters
Diete& Rhinoceros::getDiete(){
    std::cout<<"\tDiete herbivore:"<<std::endl;
    diete.afficherDiete();
    return diete;
}