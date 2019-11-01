/**
  * File :		Client.h
  * Author : 	M. Herique
  * Date :		25 octobre 2019
  * Course : 	C-C++ Programming 
  * Summary :	Daclaration of the Client Class
  */  

#include <string>

#ifndef CLIENT_H
#define CLIENT_H

class Client{

public : 
	Client(std::string nom_client , std::string prenom_client , std::string IDClient , int nb_reservations_effectues=0);
	std::string getIdClient() const;
	std::string getNomClient() const;
	std::string getPrenomClient() const;
	int getNbReservation() const;
	void setNbReservation(int NbRes);

private :
	const std::string m_identifiant_client;	
	const std::string m_nom_client;
	const std::string m_prenon_client;
	int m_nb_reservations_effectues;

};

#endif