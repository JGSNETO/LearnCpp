#include <iostream>

int main()
{
    int numero {4890};
    char letra {'E'};
    //Declarei um ponteiro genérico ou vazio (void)
    //Significa que ele não tem ainda um tipo que possa apontar
    //Isso é útil quando você por exemplo retorna algo de alguma função e atribui a um ponteiro. Neste caso
    //Você não sabe de ante mão que tipo de dado você vai retornar e assim depois que você especificar qual tipo
    // de dado o ponteiro void* passará a apontar. 
    void *ptrG;
    //Agora ptrG passa a apontar para a variável letra
    //Pois ele recebeu o endereço de memória desta variável
    ptrG = &letra;
    //Porque deu erro ? 
    //Lembre que o endereço de uma variável é apenas o primeiro byte dela. O primeiro endereço em que ela esta 
    //carregada. 
    //Assim como o compilador vai saber como LER a variável
    // ex: a partir do endereço 105 eu devo percorrer quantos bytes ?
    //Ele saberá isso quando você indicar o tipo do ponteiro ptrG
    //Por enquanto ele é void 
    //Logo já que letra é do tipo char você deve indicar que o ponteiro ptrG está apontando para um char
    //Isso é feito via cast
    //std::cout << "Valor de letra via ptrG: " << *ptrG << std::endl;
    //CAST
    //Primeiro faz o cast e depois coloca o sinal de desreferenciamento.
    //*(cast para tipo desejado)NomePonteiroGenerico
    std::cout << "Valor de letra via ptrG: " << *(char*)ptrG << std::endl;
    ptrG = &numero;
    std::cout << "Valor de numero via ptrG: " << *(int*)ptrG << std::endl;
    
    system("PAUSE");
    return 0;
}