#include  <iostream>

class car {

public:

	car() { this->valor = 0; }
	int valor;
};

int main() {

	//Normal instatiation
	car corsa;
	car onix = corsa; //Create a copy of corsa;

	//Pointer instantiation
	car *fusca = new car();
	car *kombi = fusca; //Create the object and point to fusca

	fusca->valor = 5;
	//Created on heap
	std::cout << "Value of fusca: " << fusca->valor << std::endl;
	std::cout << "Value of kombi: " << fusca->valor << std::endl;

	
	corsa.valor = 5;
	//Created on stack
	std::cout << "Value of corsa: " << corsa.valor << std::endl;
	std::cout << "Value of corsa: " << onix.valor << std::endl;

	delete fusca;
	delete kombi;

	system("PAUSE");
	return 0;
}
