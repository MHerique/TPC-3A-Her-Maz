#include "Chambre.h"

Chambre::Chambre(std::string idchbr, typ typechbr, int prix)
{
	m_idchbr = idchbr;
	m_typechbr = typechbr;
	m_prix = prix;
};

std::string Chambre::getIdchbr() const {
	return m_idchbr;
};

typ Chambre::getTypechbr() const {
	return m_typechbr;
};

int Chambre::getPrix() const {
	return m_prix;
};
void Chambre::updateChambre(std::string idchbr, typ typechbr, int prix){
	m_idchbr = idchbr;
	m_typechbr = typechbr;
	m_prix = prix;
};
void Chambre::display() const {
	std::cout << "Identifiant de la chambre : " << m_idchbr << ". Type de la chambre : " << m_typechbr << ". Prix de la chambre : " << m_prix << " €." << std::endl;
}