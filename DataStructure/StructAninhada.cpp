/**
 * @file StructAninhada.cpp
 * @author your name (you@domain.com)
 * @brief Struct Aninhada
 * @version 0.1
 * @date 2022-04-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cstring>

struct Data
{
    int Dia;
    int Mes;
    int Ano;
};

struct Endereco 
{
    std::string Rua;
    std::string Cidade;
    std::string Estado;
    std::string Pais;
};

struct Pessoa
{
    std::string Nome;
    //Aqui foi declaro uma variável do tipo struct Data
    Data dtNascimento;
    //Aqui foi declarado uma variável do tipo enderço
    Endereco Endereco;
};

int main(){

    Pessoa Pessoa01;
    Pessoa01.Nome = "Udemy";
    Pessoa01.dtNascimento.Ano = 2000;
    Pessoa01.dtNascimento.Mes = 02;
       
    std::cout << Pessoa01.dtNascimento.Ano << "\n";
    system("PAUSE");
    return 0;
}