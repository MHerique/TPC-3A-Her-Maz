#include <iostream>
#include <vector>
#include "Chambre.h"
#include <string>

#ifndef HOTEL_H
#define HOTEL_H

class Hotel{
	public :
	Hotel(std::string nom , std::string identifiant , std::string ville , int nombre_chambre);
	std::string getId() const;
	std::string getNom() const;
	std::string getVille() const;
	Chambre* getChambre(int numero_chambre) ;

	private :
	const std::string m_identifiant_hotel ;
	const std::string m_ville ;	
	const std::string m_nom_hotel ;
	std::vector<Chambre> m_liste_chambres ;
} ;




#endif