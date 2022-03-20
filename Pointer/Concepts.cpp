/**
 * @file Concepts.cpp
 * @author your name (you@domain.com)
 * @brief Concepts about pointers;
 * @version 0.1
 * @date 2022-03-20
 * 
 * @copyright Copyright (c) 2022
 * 
 * 
 * Variáveis: Armazenam dentro delas, valores relacionadas com seu tipo. Ao declarar, você solicitar um 
 * espaço na memória para armazenar o valor da variável. Variáveis ao serem criadas na memória RAM, recebem
 * um endereço de memória alocado para esta variável. Variáveis ao serem criadas recebem um local na memória 
 * RAM  do tamanho igual a quantidade de bytes necessários para armazenamento do seu tipo. 
 * 
 * Se uma variável pode ocupar vários bytes na memória então qual é seu endereço de memória ?
 * Operador &(e comercial)
 * Mostrando o endereço de uma variável: Operador &. & endereço de memória de:
 * 
 * O endereço é o endereço do primeiro byte, não importando o seu tamanho.
 * 
 * Ponteiro é uma variável: Tem endereço alocado na RAM; Tem identificador ( nome de variável); Tem tipo
 * Tem algo armazenado dentro dele e este algo é um endereço de memória.
 * Um ponteiro também é uma variável só que armazena dentro dele um endereço de memória. 
 * Declarando ponteiros: A solução encontrada foi utilizar o símbolo asterístico * para indicar ao compilador
 * que agora a varíavel será um ponteiro e portanto irá armazenar enredeços de memória. 
 * TIPO *<nomeponteiro> 
 * int *ptr; ->Declara uma variável de nome ptr que deve ser um ponteiro e portanto irá armazenar dentro dela
 * um, eu disse, um endereço de memória. Esta variável ptr irá conter um endereço de memória de outra variável
 * que deve ser do tipo inteiro.
 * double *ptr;
 */

#include <iostream>

int main()
{
    setlocale(LC_ALL, "portuguese");
    //Basic pointer
    /*int numero = 10;
    double salario = 45.67;

    std::cout << "\nTamanho variável int: " << sizeof(numero) << std::endl;
    std::cout << "\nTamanho variável double: " << sizeof(salario) << std::endl;
    std::cout << "\nEndereço de memória da variável int: " << &numero << std::endl;
    std::cout << "\nEndereço de memória da variável double: " << &salario << std::endl;*/
    
    //Declaring and using 
    int *ptr {nullptr}; //Uniform initiallization
    int numero = 101;
    //Aqui vamos colocar na tela o endereço de memória da variável de número. Ou seja, onde ela está
    // carregada na memória RAM. 

    //Agora queremos colocar o endereço de memória da variável ponteiro
    //Para colocar algo dentro de uma variável usamos o nome desta variável e o operador atribuição;
    //ex:?
    numero = 102;
    ptr = &numero;
    //Se ptr tem o endereço da variável número dentro dele. Ele pode modificar o valor da variável indiretamente ? SIMMM
    //Como ??
    *ptr = 103;
    std::cout << "\nEndereço de numero: " << &numero << std::endl;
    // & -> Endereço em que está alocado na memória RAM
    // ptr -> O valor que está dentro DENTRO da variável ponteiro ptr. Que para confundir tudo é também um endereço de memória
    // * -> Representa o valor armazenado no endereço que o ponteiro está apontado
    //Algo importante aqui: &ptr vai colocar na tela o endereço de memória alocado para variável ponteiro
    //ou seja qual lugar na RAM ele está alocado ?
    //Veja nós ainda não estamos colocando na tela nada que esteja dentro das variáveis.
    std::cout << "\nEndereço de ptr: " << &ptr << std::endl;

    system("PAUSE");
    return 0;
}