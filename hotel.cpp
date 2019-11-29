#include <hotel.h>
#include <iostream>
#include <vector>



Hotel::Hotel(std::string nom ; std::string identifiant ; std::string ville ; int nombre_chambre=0) : m_nom_hotel(nom) , m_ville(ville) , m_identifiant_hotel(identifiant) {
	for(int i=0;i<nombre_chambre;i++)
		std::string ID, type ;
		int test=0, prix=0;
		while(test!=1){
			std::cout << "Entrez l'ID de la chambre (5 caractère)" << std::endl ;
			std::cin >> ID ;
			std::cout << "Vous avez rentré : " << valeur<<std::endl << "Entrez 0 : "  ;
			std::cin >> test;
		}
		test = 0 ;
		while(test!=1){
			std::cout << "Entrez le type de la chambre (Simple, Double, Triple, Quadruple, Suite)" << std::endl ;
			std::cin >> type ;
			std::cout << "Vous avez rentré : " << type<<std::endl << "Entrez 0 : "  ;
			std::cin >> test;
		}
		test = 0 ;
		while(test!=1){
			std::cout << "Entrez le prix de la chambre (nombre entier)" << std::endl ;
			std::cin >> prix ;
			std::cout << "Vous avez rentré : " << prix<<std::endl << "Entrez 0 : "  ;
			std::cin >> test;
		}
		m_liste_chambre.push_back(Chambre(ID,type,prix));

};
	



std::string Hotel::getId() const{
	return m_identifiant_hotel ;
} ;
std::string getNom() const{
	return m_nom_hotel ;
};
std::string getVille() const{
	return m_ville ;
} ;
Chambre getChambre(int numero_chambre){
	return m_liste_chambre(&numero_chambre) ;
};