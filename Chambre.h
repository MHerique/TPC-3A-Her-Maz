#ifndef _Chambre_h
#define _Chambre_h

#include <iostream>

enum typ {Simple, Double, Triple, Quadruple, Suite};
class Chambre
{
public: 
	Chambre(std::string idchbr=0, int prix=0, typ typechbr);
	std::string getIdchbr() const;
	typ getTypechbr() const;

	int getPrix() const;
private:
	std::string m_idchbr;
	typ m_typechbr;
	int m_prix;
};

#endif // _Chambre_h