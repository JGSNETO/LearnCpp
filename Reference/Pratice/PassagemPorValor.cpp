#include <iostream>

void TrocaNumero (int Num1, int Num2);
int main()
{

    setlocale(LC_ALL, "portuguese");
    int Num1, Num2;

    std::cout << "\nDigite o primeiro Número: " << "\n";
    std::cin >> Num1;
    std::cout << "\nDigite o segundo Número: " << "\n";
    std::cin >> Num2;
    std::cout << "\nValores antes da troca\n";
    std::cout << "\nNumero1 = " << Num1;
    std::cout << "\nNumero2 = " << Num2;
    std::cout << "\nValores depois da troca\n";
    /*
    Esta chamada de funções apenas COPIA o valor de Numero1 e Numero2
    e coloca estes valores em Num1 e Num2 respectivamente da função
    Troca Numeros..
    Não há relação alguma com estas variáveis..
    Numero1 e Numero2 são variáveis locais a função main
    */
    TrocaNumero(Num1,Num2);
    /*
    Mesmo sendo mesmo nome, são variáveis diferentes e com endereços de memória diferentes
    A ISSO CHAMAMOS DE PASSAGEM DE PARÂMETROS POR VALOR
    APENAS UMA CÓPIA DO VALOR É ENVIADO A FUNÇÃO
    */
    std::cout << "\nNum1 = " << &Num1 << "\n";
    std::cout << "\nNum2 = " << &Num2 << "\n";

    system("PAUSE");
    return 0;
}

//E num1 e num2 são variáveis locais a função TrocaNumeros

void TrocaNumero (int Num1, int Num2)
{
    /*
    Como fazer a troca de valores de dois números ?
    Precisamos de um local temporário para armazenar o valor de Num1 antes dele
    receber no valor!
    Variável temporária que guarda valor de Num1
    Ex: se for digitado 10 Temp=10 e se for digitado Num2 = 20 temos
    */

   std::cout << "\nNum1 Função = " << &Num1;
   std::cout << "\nNum2 Função = " << &Num2;

   int Temp { Num1 };
   Num1 = Temp;
   Num2 = Temp;
   // A troca ocorre apenas nas variáveis locais
   // Numéros 1 e 2 ficam intactos sem alteração

}