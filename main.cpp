#include <iostream>
#include "animaux.h"
#include "tigre.h"
#include "singe.h"
#include "rhinoceros.h"


int main()
{
    const int TAILLE_TABLEAU = 250;
    Animaux* animaux_du_parc[TAILLE_TABLEAU];
    int nb_animaux = 0;
    int choix_menu = 0;
    
    
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
                if(nb_animaux < TAILLE_TABLEAU){
                    std::string nom;
                    double poids;
                    
                    std::cout<<"Entrez le nom du tigre (Sans espaces): ";
                    std::cin>> nom;
                    
                    std::cout<<"Entrez le poids du tigre: ";
                    std::cin>> poids;
                    
                    animaux_du_parc[nb_animaux] = new Tigre(nom, poids);
                }
                else{
                    std::cout<<"Desole le parc a atteint sa capacite maximale, vous ne pouvez pas ajouter d'autres animaux."<<std::endl;
                }
            }
            case 2:{
                if(nb_animaux < TAILLE_TABLEAU){
                    std::string nom;
                    double poids;
                    bool enclos_avec_herbe;
                    
                    std::cout<<"Entrez le nom du singe (Sans espaces): ";
                    std::cin>> nom;
                    
                    std::cout<<"Entrez le poids du singe: ";
                    std::cin>> poids;
                    
                    std::cout<<"Ce singe a-t-il un enclos avec de l'herbe?( 1=Oui / 0=Non ): ";
                    std::cin>> enclos_avec_herbe;
                    
                    animaux_du_parc[nb_animaux] = new Singe(nom, poids, enclos_avec_herbe);
                }
                else{
                    std::cout<<"Desole le parc a atteint sa capacite maximal, vous ne pouvez plus ajouter d'animaux."<<std::endl;
                }
            }
            case 3:{
                if(nb_animaux < TAILLE_TABLEAU){
                    std::string nom;
                    double poids;
                    int espace_enclos;
                    
                    std::cout<<"Entrez le nom du rhinoceros (Sans espaces): ";
                    std::cin>> nom;
                    
                    std::cout<<"Entrez le poids du rhinoceros: ";
                    std::cin>> poids;
                    
                    std::cout<<"Entrez l'espace de l'enclos en metres-carres: ";
                    std::cin>> espace_enclos;
                    
                    animaux_du_parc[nb_animaux] = new Rhinoceros(nom, poids, espace_enclos);
                }
                else{
                    std::cout<<"Desole le parc a atteint sa capacite maximal, vous ne pouvez plus ajouter d'animaux."<<std::endl;
                }
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
