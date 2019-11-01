#include "Client.h"
#include <iostream>

// code ascii: Majuscules =[65,90] minuscules = [97,122] num =[48,57]

Client::Client(std::string nom_client , std::string prenom_client , std::string IDClient , int nb_reservations_effectues) : m_nom_client(nom_client) ,m_prenon_client(prenom_client), m_nb_reservations_effectues(nb_reservations_effectues), m_identifiant_client(IDClient) {

};

std::string Client::getNomClient() const{
	return m_nom_client;
};

std::string Client::getIdClient() const{
	return m_identifiant_client;
};

int Client::getNbReservation() const{
	return m_nb_reservations_effectues;	
};
void Client::setNbReservation(int NbRes){
	if(NbRes >= 0)
		m_nb_reservations_effectues = NbRes;
	else
		std::cout <<"Le nombre de réservation rentré n'est pas valide"<<std::endl;
};