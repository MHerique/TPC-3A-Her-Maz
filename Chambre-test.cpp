#include "Chambre.h"

int main () {
	Chambre a("12354", Simple, 90);
	a.getIdchbr();
	a.updateChambre("45688", Double, 130);
	a.display();
	return 0;
}