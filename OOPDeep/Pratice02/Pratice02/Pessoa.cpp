#include "Pessoa.h"

void Pessoa::AcessarSistema()
{
	std::cout << "\nSistema acessado\n";

}

std::string Pessoa::GetNome()
{
	return Nome;
}

void Pessoa::SetNome(std::string NovoNome)
{
	Nome = NovoNome;
}
