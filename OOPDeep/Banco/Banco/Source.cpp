#include "Conta.h"
#include <iostream>

int main()
{
	Conta ContaCliente01;
	Conta ContaCliente02;

	ContaCliente01.SetBanco("Bradesco");
	ContaCliente01.SetAgencia(1234);
	ContaCliente01.SetNumConta(9999);
	ContaCliente01.SetTitular("Fulano");
	ContaCliente01.Depositar(14500);
	ContaCliente01.Sacar(1500);

	ContaCliente01.SetBanco("Brasil");
	ContaCliente01.SetAgencia(5678);
	ContaCliente01.SetNumConta(1111);
	ContaCliente01.SetTitular("Beltrano");
	
	ContaCliente01.Transferir(ContaCliente02, 2000);
	ContaCliente02.Sacar(500);
	ContaCliente02.Sacar(4000);
	system("PAUSE");
	return 0;
}
