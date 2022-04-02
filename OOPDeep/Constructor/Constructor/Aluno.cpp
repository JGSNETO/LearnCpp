#include "Aluno.h"
#include <iostream>
#include <string>

Aluno::Aluno(std::string Nome, int Idade, bool bMatriculado)
{
	
	this->Nome = Nome;
	this->Idade = Idade;
	this->bMatriculado = bMatriculado;
}
Aluno::~Aluno()
{
	std::cout << "\n Destrutor objeto endereco: " << this << "Executado\n";
}
std::string Aluno::Get_Nome()
{
	return Nome;
}
int Aluno::Get_Idade()
{
	return Idade;
}
bool Aluno::Get_Matriculado()
{
	return bMatriculado;
}

void Aluno::Set_Idade(int Idade)
{
	this->Idade = Idade;
	
}

void Aluno::Set_Nome(std::string Aluno)
{
	this->Nome = Nome;
}

void Aluno::Set_Matriculado(bool bMatriculado)
{
	this->bMatriculado = bMatriculado;
}
