#ifndef _Chambre_h
#define _Chambre_h

#include <iostream>

enum typ {Simple, Double, Triple, Quadruple, Suite};
class Chambre
{
public: 
	Chambre(std::string idchbr=0, typ typechbr=Simple, int prix=0);
	std::string getIdchbr() const;
	int getPrix() const;
	typ getTypechbr() const;
	void updateChambre(std::string idchbr, typ typechbr, int prix);
	void display() const;
private:
	std::string m_idchbr;
	typ m_typechbr;
	int m_prix;
};

#endif // _Chambre_h