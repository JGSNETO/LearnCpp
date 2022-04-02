#include "Aluno.h"

Aluno::Aluno(td::string Nome, int Idade, bool bMatriculado)
{
	/*Parou aqui*/
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
