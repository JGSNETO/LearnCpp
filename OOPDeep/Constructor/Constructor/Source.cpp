#include "Aluno.h"
#include <iostream>
#include <string>

int main()
{
	{
		/*Como não existe mais o construtor padrão. Por isso da erro: Aluno neto;.
		Aluno(){} -> Construtor padrão
		Este contrutor é criado pelo compilador, caso você não crie nenhum construtor. Se você criar
		o compilador deixará de criar o compilador padrão*/
		Aluno Neto("Neto", 10, true);
		Neto.Set_Idade(20);
		std::cout << "Idade: " << Neto.Get_Idade() << "\n";
	}
	/*O destrutor ele tem que ser chamado após o fim do escopo do objeto. Logo um novo escopo({}) será criado*/
	/*Não precisa chamar, automaticamente ele é executado. */
	system("PAUSE");
	return 0;
}