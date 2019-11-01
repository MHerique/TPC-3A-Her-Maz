#include <iostream>
#include "Client.h"


int main(){
	Client a("mathieu","herique","ABC");
	std::cout << a.getNomClient() << std::endl;
	std::cout << a.getIdClient() << std::endl;

}