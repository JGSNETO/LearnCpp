#pragma once
#pragma once

#include <iostream>
#include <string>

/*Este é o arquivo .h é onde existem apenas as declarações das atribuições e métodos da classe.
Aqui não existem as definições, implementações das funções, pois isso será feito no arquivo .cpp.
É a separação do O QUE (.h) do COMO (.cpp).*/
class Conta
{

private:

    std::string Banco;
    int Agencia;
    int NumConta;
    std::string Titular;
    double Saldo {0.0};

public:
    bool Sacar(double valor);
    void Depositar(double valor);
    /* Neste caso o parâmetro Destino recebe apenas uma cópia do valor do objeto. Ele não tem como alterar
    o objeto pois só recebeu uma cópia dele. Logo podemos usar o conceito de referência para passar a referência
    do objeto com isso Destino vai poder alterar este objeto pois será realizada uma pasagem de argumentos 
    por valor referência.*/
    void Transferir(Conta &Destino, double valor);
    double ConsultarSaldo();
    std::string GetBanco();
    int GetAgencia();
    int GetNumConta();
    std::string GetTitular();
    void SetBanco(std::string Banco);
    void SetAgencia(int Agencia);
    void SetTitular(std::string Titular);
    void SetNumConta(int NumConta);


};