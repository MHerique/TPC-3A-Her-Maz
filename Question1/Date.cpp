#include "Date.h"

Date::Date(int jour, int mois, int annee)
{
	m_jour = jour;
	m_mois = mois;
	m_annee = annee;
	if ((jour <= 31) | (jour>=0))
		m_jour=jour;
	else
		std::cout<<"Le format de jour est invalide" <<std::endl;
	if ((mois <=12) | (mois >=0))
		m_mois=mois;
	else
		std::cout<<"Le format de mois est invalide" <<std::endl;
	if ((annee<=2100) | (annee>=2019))
		m_annee=annee;
	else
		std::cout<<"Le format de l'annee est invalide" <<std::endl;

};

int Date::getJour() const {
	return m_jour;
};

int Date::getMois() const {
	return m_mois;
};

int Date::getAnnee() const {
	return m_annee;
};
void Date::updateDate(int jour, int mois, int annee){
	m_jour = jour;
	m_mois = mois;
	m_annee = annee;
};
void Date::display() const {
	std::cout << "Date de la reservation : " << m_jour << "-"
<< m_mois << "-" << m_annee << std::endl;
};