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

    Struct Pessoa Pessoa01[2];
    for (int i = 0; i<2; i++)
    {
        Pessoa01[i].Nome = "Udemy";
        Pessoa01[i].dtNascimento.Ano = 2000;
        Pessoa01[i].dtNascimento.Mes = 02;
   
    }
       
    std::cout << Pessoa01[0].dtNascimento.Ano << "\n";
    system("PAUSE");
    return 0;
}