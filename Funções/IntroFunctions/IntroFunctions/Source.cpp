/**
* Introdução a como criar funções
* syntax: type Name (type name){}s
*/

#include <iostream>

int Somatorio(int numA, int numB)
{
	return numA + numB;
}
int main() 
{
	int numA = 0;
	int numB = 0;
	std::cout << "Digite o primeiro numero: " << std::endl;
	std::cin >> numA;
	std::cout << "Digite o segundo numero: " << std::endl;
	std::cin >> numB;

	std::cout << "O resultado da soma sera: " << Somatorio(numA, numB) << std::endl;
	system("PAUSE");
	return 0;
}