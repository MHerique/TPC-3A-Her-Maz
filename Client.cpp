#include "Client.h"
#include <random>
#include <iostream>

// code ascii: Majuscules =[65,90] minuscules = [97,122] num =[48,57]

Client::Client(std::string nom_client,std::string prenom_client,int nb_reservations_effectues) : m_nom_client(nom_client) ,m_prenon_client(prenom_client), m_nb_reservations_effectues(nb_reservations_effectues) {
	std::string ID="";
	std::random_device rd;
	for(int i=0;i<4;i++){
		ID += (65 + rd()% 25);
	}
	for(int i=0;i<2;i++){
		ID += (97 + rd()% 25);
	}
	for(int i=0;i<2;i++){
		ID += (48 + rd()% 9);
	}
	m_identifiant_client=ID;
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
