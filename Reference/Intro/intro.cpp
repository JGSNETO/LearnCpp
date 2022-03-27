#include <iostream>

int main()
{
    int Numero = 1024;
    char letra = 'A';
    int &Ref = Numero;
    //Declara uma referência// Significa que foi criado um apelido, um rótulo, um alias para a variável Numero
    //Neste caso não é criada uma região de memória que vai conter algo dentro
    // e que seria chamada Ref. Ref não tem endereço na RAM.
    //Não é uma variável que podemos colocar algo dentro!
    //É apenas um atalho para numero.
    //Para colocar na tela o valor que a referencia referencia basta colocar o nome da referência. Não precisa
    //Não precisa desreferenciar como nos ponteiros. 
    /*Observe que &Ref irá retornar o endereço de número pois uma referência nasce e fica como novo rótulo
    da variável que ela referencia estando portanto no mesmo endereço de número, neste caso.
    */
    
    std::cout << "Valor de Numero usando Ref: "  << Ref << "\n";
    std::cout << "Valor do endereço de numero: "  << &Numero << "\n";
    std::cout << "Valor Endereco de Ref: "  << &Ref << "\n";
    /* Já aqui será criada uma variável, um espaço n memória RAM e dentro do espaçode nome ptr será colocado 
    o endereço de memória de numero. É bem diferente da referência pois esta não contem um espaço alocado, ela
    apenas é mais um nome para referênciar a variável. 
    */

    int *Ptr = &Numero;
    std::cout << "\nValor Endereco de ptr na RAM: " << &Ptr << "\n";
    std::cout << "\nValor de Numero usando ptr: " << *Ptr << "\n";
    std::cout << "\nValor Endereco contido dentro de ptr: " << Ptr << "\n";
    
    system("PAUSE");
    return 0;
}