#include <iostream>
#include <string>
#include "Professor.h"
#include "Aluno.h"
#include "Bibliotecario.h"

int main()
{
	//Atrávés de comstrutores; 
	Professor Marcos("Pacheco", 1234, 1234, "Udemy");
	Aluno Luke("Skywalker", 9999, 9999, "Jedi");
	Bibliotecario ObiWan("Kenobi", 111, 222);

	std::cout << Marcos.GetNome() << std::endl;

	/*Forma demorada*/
	//Marcos.Nome = "Pacheco";
	//Luke.Nome = "Skywalker";

	system("PAUSE");
	return 0;
}