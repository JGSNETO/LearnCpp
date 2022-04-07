#pragma once
#include<iostream>
#include <string>
/*Qd você não indica visibilidade o encapsulamento é private*/
class Pessoa
{
public:


	Pessoa() {}
	//Interessante criar contrutores
	/*Contrutor padrão já pode receber valores padõres desta forma*/
	//Pessoa() :Nome(""), CPF(0), Matricula(0) {};
	/*Agora um construtor com parâmetros:*/
	Pessoa(std::string NovoNome, int NovoCPF, int NovaMatricula)
	{
		Nome = NovoNome;
		CPF = NovoCPF;
		Matricula = NovaMatricula;
	}
	/*Ou:Pessoa(std::string NovoNome, int NovoCPF, int NovaMatricula): Nome(NovoNome), CPF(NovoCPF), Marticula(NovaMatricula)){} */
	void AcessarSistema();
	/*Para pegar valor get para setar valor set*/
	std::string GetNome();
	void SetNome(std::string NovoNome);

private:
	std::string Nome;
	int CPF;
	int Matricula;
};

