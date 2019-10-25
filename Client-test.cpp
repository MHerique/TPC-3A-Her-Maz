#include <iostream>
#include "Client.h"


int main(){
	Client a("mathieu","herique");
	std::cout << a.getNomClient() << std::endl;
	std::cout << a.getIdClient() << std::endl;

}