#pragma once
#include <string>


class Aluno
{

private:

	std::string Nome;
	int Idade;
	bool bMatriculado;

public:

	Aluno(std::string Nome, int Idade, bool bMatriculado);
	~Aluno();
	std::string Get_Nome();
	int Get_Idade();
	bool Get_Matriculado();
	void Set_Nome(std::string Nome);
	void Set_Idade(int Idade);
	void Set_Matriculado(bool bMatriculado);
};