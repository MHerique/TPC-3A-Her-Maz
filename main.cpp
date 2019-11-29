#include <iostream>
#include <string>


int main(){
	std::string test="";
	char sel=' ';
	std::cout << std::endl << system("clear");
	while(test!="quit"){
		std::cout << "Bienvenu dans le logiciel de gestion d'Hôtel" << std::endl;
		std::cout << std::endl << "Vous êtes dans le menu, sélectionnez l'action à effectuer :" << std::endl << std::endl;
		std::cout <<  "	1) Ajouter un hôtel." << std::endl;
		std::cout <<  "	2) Quitter." << std::endl << std::endl;
		std::cout << "Entrez le numéro de l'action à effectuer : ";
		std::cin >> sel;

		switch(sel){
			case '1' :
				break;
			case '2' :
				test="quit";
				break;
			default :
				std::cout <<system("clear") ;
				std::cout << "Le choix que vous avez sélectionné n'est pas disponiple" << std::endl;
				break;	
		}
	}

	return 0;
} ;