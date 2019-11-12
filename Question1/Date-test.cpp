#include "Date.h"

int main (){
	Date a(24,05,1999);
	a.getJour();
	a.updateDate(03,02,2010);
	a.display();
	return 0;
}