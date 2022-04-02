#include "Aluno.h"
#include<iostream>
#include<string>

int main()
{
	Aluno neto;

	neto.Set_Idade(10);
	std::cout << "Idade: " << neto.Get_Idade() << "\n";

	system("PAUSE");
	return 0;
}