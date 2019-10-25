#include <iostream>
#include "Chambre.h"



int main(){
	int a,b,c;
	std::cout<<"Entrer l'identifiant client"
	std::cin>>a;
	std::cout<<"Entrer le type de chambre"
	std::cin>>b;
	std::cout<<"Entrer le prix de la chambre"
	std::cin>>c;
	Chambre a(a,b,c);
	std::cout<<a.getIdchbr()<<std<<endl;
};