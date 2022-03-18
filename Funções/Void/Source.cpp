#include <iostream>

int SomaNum (int a, int b)
{
	return a + b;
}

void Mensagem() 

{
	std::cout << "\n Processando \n ";
	//Este recurso é utilizando, quando por exemplo existe uma condição que foi atendida. Ao chegar no return, sai da função.
	return;
}


int main() 
{

	
	std::cout << "Digite o primeiro numero: " << std::endl;
	std::cout << "Digite o segundo numero: " << std::endl;
    //Simulando entrada de valores
    int a=10;	
	int b=20;
	Mensagem();	
	std::cout << "O resultado da soma e: " << SomaNum(a,b) << std::endl;
	system("PAUSE");
	return 0;

		
}