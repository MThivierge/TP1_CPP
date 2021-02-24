#include <iostream>
#include "animaux.h"
#include "tigre.h"
#include "singe.h"
#include "rhinoceros.h"


int main()
{
    int choix_menu = 0;
    Tigre tigre("Alice", 120.8);
    Singe singe("Bob", 10.5, true);
    Rhinoceros rhino1("Eve", 1812.3, 1000);
    Rhinoceros rhino2("Horny", 2021.5, 6000);
    tigre.afficherTigre();
    singe.afficherSinge();
    rhino1.afficherRhinoceros();
    rhino2.afficherRhinoceros();
    
    
    do{
        std::cout<<"***MENU***"<<std::endl;
        std::cout<<"1- Ajouter un tigre"<<std::endl;
        std::cout<<"2- Ajouter un singe"<<std::endl;
        std::cout<<"3- Ajouter un rhinoceros"<<std::endl;
        std::cout<<"4- Afficher le compte-rendu du parc"<<std::endl;
        std::cout<<"5- Quitter"<<std::endl;
        std::cout<<"Entrez le chiffre correspondant a votre choix: ";
        std::cin>> choix_menu;
        
        switch(choix_menu){
            case 1:{
                
            }
            case 2:{
                
            }
            case 3:{
                
            }
            case 4:{
                
            }
            case 5:{
                std::cout<<"Aurevoir"<<std::endl;
            }
            default:{
                std::cout<<"Reponse invalide. Votre choix doit etre entre 1 et 5."<<std::endl;
            }
        };
        
    }while(choix_menu != 5);
}
