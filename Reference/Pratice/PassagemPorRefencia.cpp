#include <iostream>

/*
Agora estamos indicando que a função terá dois parâmetros que serão
referências dos argumentos passafos para esta função ou seja
o que for enviado para esta função passará a ser referenciado por Num1 e Num2 respectivamente

*/
void TrocaNumero (int& Num1, int& Num2);
int main()
{

    setlocale(LC_ALL, "portuguese");
    int Numero1, Numero2;

    std::cout << "\nDigite o primeiro Número: " << "\n";
    std::cin >> Numero1;
    std::cout << "\nDigite o segundo Número: " << "\n";
    std::cin >> Numero2;
    std::cout << "\nValores antes da troca\n";
    std::cout << "\nNumero1 = " << Numero1;
    std::cout << "\nNumero2 = " << Numero2;
    
   
    TrocaNumero(Numero1, Numero2);
    /*
    Mesmo sendo mesmo nome, são variáveis diferentes e com endereços de memória diferentes
    A ISSO CHAMAMOS DE PASSAGEM DE PARÂMETROS POR VALOR
    APENAS UMA CÓPIA DO VALOR É ENVIADO A FUNÇÃO
    */
    std::cout << "\nValores depois da troca\n";
    std::cout << "\nNum1 = " << &Numero1 << "\n";
    std::cout << "\nNum2 = " << &Numero2 << "\n";

    std::cout << "\nEndereço de memória de Numero1: " << &Numero1;
    std::cout << "\nEndereço de memória de Numero2: " << &Numero2;

    system("PAUSE");
    return 0;
}

//E num1 e num2 são variáveis locais a função TrocaNumeros

void TrocaNumero (int& Num1, int& Num2)
{
    /*
    Num1 passa a ser 20, aqui estamos copiando o Numero1 o valor de Numero2 pois são referências é como se fosse 
    Numero1 = Numero2 lembre que referências são alias para suas variáveis
    Isso aqui (int& Num1, int& Num2) é o mesmo que int& Num1 = Numero1 e int& Num1 = Numero2
    Só que isso ocorre na chamada da função
    ISSO damos o nome de passagem de argumentos para a fução por referência.
    */

   std::cout << "\nNum1 Função = " << &Num1;
   std::cout << "\nNum2 Função = " << &Num2;

   int Temp { Num1 };
   Num1 = Temp;
   Num2 = Temp;
   // A troca ocorre apenas nas variáveis locais
   // Numéros 1 e 2 ficam intactos sem alteração

}