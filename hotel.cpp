#include "hotel.h"
#include <iostream>
#include <vector>
#include <string>
#include "Chambre.h"



Hotel::Hotel(std::string nom , std::string identifiant , std::string ville , int nombre_chambre=0) : m_nom_hotel(nom) , m_ville(ville) , m_identifiant_hotel(identifiant) {
	for(int i=0;i<nombre_chambre;i++){
		std::string ID ;
		int test=0,prix=0,cintype=0;
		typ type;
		while(test!=1){
			std::cout << "Entrez l'ID de la chambre (5 caractère)" << std::endl ;
			std::cin >> ID ;
			std::cout << "Vous avez rentré : " << ID<<std::endl << "Entrez 1 : "  ;
			std::cin >> test;
		}
		test = 0 ;
		while(test!=1){
			std::cout << "Entrez le type de la chambre (Simple=0, Double=1, Triple=2, Quadruple=3, Suite=4)" << std::endl ;
			std::cin >> cintype ;
			std::cout << "Vous avez rentré : " << cintype <<std::endl << "Entrez 1 : "  ;
			std::cin >> test;
		}
		test = 0 ;
		while(test!=1){
			std::cout << "Entrez le prix de la chambre (nombre entier)" << std::endl ;
			std::cin >> prix ;
			std::cout << "Vous avez rentré : " << prix<<std::endl << "Entrez 1 : "  ;
			std::cin >> test;
		}
		switch(cintype){
			case 0 :
				type=Simple;
				break;
			case 1 :
				type=Double;
				break;
			case 2 :
				type=Triple;
				break;
			case 3 :
				type=Quadruple;
				break;
			case 4 :
				type=Suite;
				break;
		}
		m_liste_chambres.push_back(Chambre(ID,type,prix));
	}
}
	

std::string Hotel::getId() const{
	return m_identifiant_hotel ;
} 
std::string Hotel::getNom() const{
	return m_nom_hotel ;
}
std::string Hotel::getVille() const{
	return m_ville ;
} 
Chambre* Hotel::getChambre(int numero_chambre){
	return (&(m_liste_chambres.at(numero_chambre))) ;
}