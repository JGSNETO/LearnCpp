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
    double Saldo;

public:
    bool Sacar(double valor);
    void Depositar(double valor);
    void Transferir(Conta &Destino, double valor);
    double ConsultarSaldo();
    std::string GetBanco();
    int GetAgencia();
    int GetNumConta();
    std::string GetTitular();
    void SetBanco(std::string Banco);
    void SetAgencia(int Agencia);
    void SetTitular(std::string Titular);


};