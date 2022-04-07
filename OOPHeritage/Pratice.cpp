#include <iostream>
#include <string>


class Base
{
/*Sequência de áreas: Public, protected e private.*/
public:
  
    void SolicitarNumeros(){
        std::cout << "Num1: ";
        std::cin >> Num1;
        std::cout << "Num2: ";
        std::cin >> Num2;
    }

private:

    float Num1, Num2;
    float Soma(int Num1, int Num2){
        return (Num1 + Num2);
    }
    void MostraResultado(int Num1, int Num2)
    {
        std::cout << "Soma: " << Soma(Num1, Num2) << "\n";
    }

};

//Você só herda oque é permitido: Public
class Derivada : public Base{};

int main ()
{

    Derivada Obj;
    Obj.SolicitarNumeros();
    system("PAUSE");
    return 0;
}