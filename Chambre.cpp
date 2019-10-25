#include "Chambre.h"

Chambre::Chambre(std::string idchbr, typ typechbr, int prix)
{

};

std::string Chambre::getIdchbr() const {
	return m_jour;
};

typ Chambre::getTypechbr() const {
	return m_mois;
};

int Chambre::getPrix() const {
	return m_annee;
};