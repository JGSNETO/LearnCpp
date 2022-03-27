/* 
Ponteiro: Variável que guarda dentro dela um endereço de memória.
Referência(Não é uma variável): É um alias, apelio que se refere a outra variável. 
*/
#include <iostream>

int main ()
{
    int Numero { 1024 };
    int Numero2 { 2024 };
    //Referência não pode ficar sem atribuição ao ser criada.
    int &RefNum = Numero2;
    int* ptr = &Numero;
    *ptr = 4048;
    std::cout << "\nValor de numero: " << *ptr << "\n";
    //Ref só pode ser referenciado uma única vez
    RefNum = 5644; 
    /* No ciclo de vda de um ponteiro podemos reatribuir, colocar um novo endereço,
    fazer ele apontar para outra variável.
    */
    ptr = &Numero2;
    *ptr = Numero + 2000;
    std::cout << "\nValor de numero2: " << *ptr << "\n";

    system("PAUSE");
    return 0;
}