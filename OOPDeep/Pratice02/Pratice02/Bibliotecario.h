#pragma once
#include "Pessoa.h"
class Bibliotecario : public Pessoa
{
public:
	void CadastrarLivros();
	Bibliotecario() {}
	Bibliotecario(std::string NovoNome, int NovoCPF, int NovaMatricula) : Pessoa(NovoNome, NovoCPF, NovaMatricula) {}
	
};

