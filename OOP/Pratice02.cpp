/**
 * @file Pratice02.cpp
 * @author your name (you@domain.com)
 * @brief Pratice about arrow notation  
 * @version 0.1
 * @date 2022-03-31
 * 
 * @copyright Copyright (c) 2022
 * 
 * Notação Flecha: NomeDaClasse *NomeObjeto = New NomeClasse()
 * (*CasaDePraia).ObtenhaNumQuartos();
 * CasaDePraia -> ObtenhaNumQuartos();
 * Casa CasaDePraia
 */
#include <iostream>

class Casa
{
private:

    int NumQuartos { 4 };
    float Tamanho { 90.0f };
    bool bTemSuit { true };

public:

    void MostrarTamanho()
    {
        std::cout <<"Numero de quartos: " << Tamanho << "\n";
    }
    int ObtenhaNumQuartos()
    {
        return NumQuartos;
    }
    bool TemSuite()
    {
        return bTemSuit;
    }
    void SetNumQuartos(int NumQuartosNew)
    {
        NumQuartos = NumQuartosNew;
    }

};
int main()
{
	/*Casa CasaDePraia;
	CasaDePraia.MostrarTamanho();
	CasaDePraia.SetNumQuartos(6);*/
    Casa *CasaDePraia = new Casa();
    /* Agora você está criando, instanciando um objeto via alocação dinâmica de memória, utilizando 
    ponteiros*. Basicamente é o mesmo que declarar da forma que você declarou, ou seja, criando um objeto
    baseado na classe casa e o endereço de memória deste objeto será colocado em casa de praia.

    Contudo trata-se de um ponteiro. Lembre.. como acessar o apontado pelo ponteiro ? Isso mesmo com 
    desreferenciamento *.

    Logo CasaDePraia.ObtenhaNumQuartos() devemos usar *ptr mas nesse caso o ponteiro é CasaDePraia.
    Logo para desreferenciar ele você faz *CasaDePraia, mas agora você está diante de uma nova estrutura
    de variável, ele contém diversos atributos e métodos(funções), que são acessíveis via ponto.
    Mas se fizer isso apenas estaria errado: CasaDePraia.MostrarTamanho()
    O correto é: (*CasaDePraia).MostrarTamanho()
    (Endereçoqueoponteiroaponta).Atributo
    (Endereçoquefuncaoaponta).funcao()
    Mas ficar digitando toda hora dois parênteses, um * e um . ficou cansativo
    Os criadores da linguagem criaram um atalho:
    (*CasaDePraia). é o mesmo que CasaDePraia -> 
    É chamada notação flecha
    //(*). Trocou-se 4 caracteres por apenas 2 ->
	//Mas é importante que você saiba que tudo é notação ponto.
	//Logo quando você digitar: 
	//CasaDePraia->SetNumQuartos(5);
	//é o mesmo que:
	//(*CasaDePraia).SetNumQuartos(5);
    */

	std::cout << "\n Num Quartos: " << CasaDePraia->ObtenhaNumQuartos();
	std::cout << "\n Tem Suite: " << CasaDePraia->TemSuite() ? std::cout << "Sim": std::cout << "Não" << "\n";
	std::cout << "\n";
	system("PAUSE");
	return 0;
}