#pragma once
#include "Pessoa.h"
class Professor : public Pessoa
{
public:
	std::string Departamento;
	Professor(){}
	Professor(std::string NovoNome, int NovoCPF, int NovaMatricula, std::string NovoDepartamento) : Pessoa(NovoNome, NovoCPF, NovaMatricula),
	Departamento(NovoDepartamento) {}
	/*Acima estamos chamando o construtor da classe base (Superclasse para iniciar os parâmetros do objeto professor*/
	void EfetuarChamada();
	void EntregarPauta();
};

