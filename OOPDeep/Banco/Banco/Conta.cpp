#include "Conta.h" //Diretório padrão dos programas
#include <iostream>
#include <string>



/*Aqui o operador escopo::está indicando que a função / Método sacar pertence a classe Conta e que este código a seguir vai
* implementar a função Sacar. 
*/
bool Conta::Sacar(double Valor)
{
	/*Se o valor do salto no objeto for menor que o valor a ser sacado, ele não poderá sacar*/
	if (Saldo < Valor)
	{
		std::cout << "\nSaldo Insuficiente\n";
		std::cout << "Seu saldo atual: R$" << ConsultarSaldo() << "\n";
		return false;

	}else{
		Saldo -= Valor;
		std::cout << "Seu saldo atual: R$" << ConsultarSaldo() << "\n";
		return true;
	}
	/*Se não foi: Temos que diminuor o saldo*/
	/*Aqui nem precisaria ter o else, porém por boa prática, vou colocar*/

};

void Conta::Depositar(double Valor)
{
	/*Saldo += Valor*/
	Saldo += Valor;
	std::cout << "\nDeposito de R$: " << Valor << " Efetuado com sucesso\n";
}
/*A função recebe como argumento um objeto do tipo conta e vai ser colocada em destino
* que é a conta que se vai depositar
*/
void Conta::Transferir(Conta &Destino, double Valor) 
{
	if (Saldo < Valor)
	{
		std::cout << "\nSaldo Insuficiente\n";
	}
	else {
		/*Aqui destino está com o objeto passado para a função
		* Logo vai chamar o método Depositar deste objeto
		*/
		Destino.Depositar(Valor);
		/*Depois de depositar você deve retirar este valor depositado do saldo*/
		Saldo -= Valor;
		std::cout << "\n*********Dados********\n";
		std::cout << "Titular: " << Destino.GetTitular() << "\n";
		std::cout << "Banco: " << Destino.GetBanco() << "\n";
		std::cout << "Ag: " << Destino.GetAgencia() << "\n";
		std::cout << "Conta: " << Destino.GetNumConta() << "\n";
		std::cout << "\nTransferência realizada com sucesso\n";
		std::cout << "Seu saldo atual: R$" << ConsultarSaldo() << "\n";
	}
}

double Conta::ConsultarSaldo()
{
	return Saldo;
}

std::string Conta::GetBanco()
{
	return Banco;
}
int Conta::GetAgencia()
{
	return Agencia;
}
int Conta::GetNumConta()
{
	return NumConta;
}
std::string Conta::GetTitular()
{
	return Titular;
}
void Conta::SetBanco(std::string Banco)
{
	/*Como o compilador vai saber se banco é variável local ou o atributo da classe conta ?*/
	//Banco = Banco
	this->Banco = Banco; 

}

void Conta::SetAgencia(int Agencia)
{
	this->Agencia = Agencia;
}
void Conta::SetNumConta(int NumConta)
{
	this->NumConta = NumConta;
}

void Conta::SetTitular(std::string Titular)
{
	this->Titular = Titular;
}

