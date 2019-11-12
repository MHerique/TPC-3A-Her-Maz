#include <iostream>

class Date 
{
public:
	Date(int jour=0, int mois=0, int annee=0);
	int getJour() const;
	int getMois() const;
	int getAnnee() const;
	void updateDate(int jour, int mois, int annee);
	void display() const;
private:
	int m_jour;
	int m_mois;
	int m_annee;
};

