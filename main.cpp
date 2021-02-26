/*
 * TP1 CPP
 * Myriam Thivierge
 * groupe 291
 * 
*/



#include <iostream>
#include <string>
#include "animaux.h"
#include "tigre.h"
#include "singe.h"
#include "rhinoceros.h"
#include "Diete.h"


int main()
{
    const int TAILLE_TABLEAU = 250;
    Animaux* animaux_du_parc[TAILLE_TABLEAU];
    int nb_animaux = 0; //Pour savoir combien d'animaux se trouve dans le parc
    int choix_menu = 0;
    
    
    do{
        std::cout<<"***MENU***"<<std::endl;
        std::cout<<"1- Ajouter un tigre"<<std::endl;
        std::cout<<"2- Ajouter un singe"<<std::endl;
        std::cout<<"3- Ajouter un rhinoceros"<<std::endl;
        std::cout<<"4- Enlever un animal"<<std::endl;
        std::cout<<"5- Afficher le compte-rendu du parc"<<std::endl;
        std::cout<<"6- Quitter"<<std::endl;
        std::cout<<"Entrez le chiffre correspondant a votre choix: ";
        std::cin>> choix_menu;
        
        std::cout<<""<<std::endl; //Espacement pour une meilleure lisibilité
        
        switch(choix_menu){
            case 1:{
                if(nb_animaux < TAILLE_TABLEAU){
                    std::string nom;
                    double poids;
                    
                    std::cout<<"*Ajout d'un nouveau tigre*"<<std::endl;
                    std::cout<<"Entrez le nom du tigre (Sans espaces): ";
                    std::cin>> nom;
                    
                    std::cout<<"Entrez le poids du tigre: ";
                    std::cin>> poids;
                    
                    animaux_du_parc[nb_animaux] = new Tigre(nom, poids);
                    nb_animaux++;
                }
                else{
                    std::cout<<"Le parc a atteint sa capacite maximal! Vous ne pouvez plus ajouter d'animaux."<<std::endl;
                }

                break;
            }
            case 2:{
                if(nb_animaux < TAILLE_TABLEAU){
                    std::string nom;
                    double poids;
                    bool enclos_avec_herbe;
                    
                    std::cout<<"*Ajout d'un nouveau singe*"<<std::endl;
                    std::cout<<"Entrez le nom du singe (Sans espaces): ";
                    std::cin>> nom;
                    
                    std::cout<<"Entrez le poids du singe: ";
                    std::cin>> poids;
                    
                    std::cout<<"Ce singe a-t-il un enclos avec de l'herbe?(1=Oui / 0=Non): ";
                    std::cin>> enclos_avec_herbe;
                    
                    animaux_du_parc[nb_animaux] = new Singe(nom, poids, enclos_avec_herbe);
                    nb_animaux++;
                }
                else{
                    std::cout<<"Le parc a atteint sa capacite maximal! Vous ne pouvez plus ajouter d'animaux."<<std::endl;
                }

                break;
            }
            case 3:{
                if(nb_animaux < TAILLE_TABLEAU){
                    std::string nom;
                    double poids;
                    int espace_enclos;
                    
                    std::cout<<"*Ajout d'un nouveau rhinoceros*"<<std::endl;
                    std::cout<<"Entrez le nom du rhinoceros (Sans espaces): ";
                    std::cin>> nom;
                    
                    std::cout<<"Entrez le poids du rhinoceros: ";
                    std::cin>> poids;
                    
                    std::cout<<"Entrez l'espace de l'enclos en metres-carres: ";
                    std::cin>> espace_enclos;
                    
                    animaux_du_parc[nb_animaux] = new Rhinoceros(nom, poids, espace_enclos);
                    
                    nb_animaux++;
                }
                else{
                    std::cout<<"Le parc a atteint sa capacite maximal! Vous ne pouvez plus ajouter d'animaux."<<std::endl;
                }

                break;
            }
            case 4:{
                if(nb_animaux>0){
                        std::string animal_a_enlever;
                        bool animal_trouve = false;
                        
                        std::cout<<"*Enlever un animal*"<<std::endl;
                        std::cout<<"Entrez le nom de l'animal a enlever (sans espaces): ";
                        std::cin>> animal_a_enlever;
                        
                        for(int i=0 ; (i<nb_animaux) && (!animal_trouve); i++){
                            
                            if(animaux_du_parc[i]->getNom() == animal_a_enlever){
                                animal_trouve = true;
                                delete animaux_du_parc[i];
                                
                                animaux_du_parc[i]=animaux_du_parc[nb_animaux-1];
                                animaux_du_parc[nb_animaux-1] = NULL;
                            }
                        } //Fin de la boucle for
                        
                        if(animal_trouve){
                            nb_animaux--;
                        }
                        else{
                            std::cout<<"Il semblerait que le parc n'a aucun animal du nom de "<<animal_a_enlever<<"!"<<std::endl;
                        }
                }//Fin de if(nb_animaux>0)
                
                else{
                    std::cout<<"Le parc n'a pas encore d'animaux!"<<std::endl;
                }
                
                break;
            }
            
            case 5:{
                
                double total_viande = 0.0;
                double total_fruits = 0.0;
                double total_herbe = 0.0;
                std::cout<<"*Compte-rendu du parc*"<<std::endl;
                for(int i=0 ; i<nb_animaux ; i++){
                    animaux_du_parc[i]->afficherInfos();
                    
                    Diete diete = animaux_du_parc[i]->getDiete();
                    total_viande += diete.getQuantiteViande();
                    total_fruits += diete.getQuantiteFruits();
                    total_herbe += diete.getQuantiteHerbe();
                }
                
                std::cout<<"Diete quotidienne totale : "<<std::endl;
                std::cout<<"Viande\t: "<<total_viande<<" kg"<<std::endl;
                std::cout<<"Fruits\t: "<<total_fruits<<" kg"<<std::endl;
                std::cout<<"Herbe\t: "<<total_herbe<<" kg"<<std::endl;
                
                break;
            }
            case 6:{
                std::cout<<"Aurevoir"<<std::endl;
                
                break;
            }
            default:{
                std::cout<<"Reponse invalide. Votre choix doit etre entre 1 et 6."<<std::endl;
                
                break;
            }
        }; //Fin du switch
        
        std::cout<<""<<std::endl; 
        
    }while(choix_menu != 6);
    
    //Destruction dynamique des objets créés
    for(int i=0 ; i<nb_animaux ; i++){
        delete animaux_du_parc[i];
        animaux_du_parc[i]=NULL;
    }
}
