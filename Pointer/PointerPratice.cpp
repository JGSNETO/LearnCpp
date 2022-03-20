#include <iostream>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero {102};
    int *ptr = &numero;   

    std::cout << "\nValor da variável numero: " << numero << std::endl;
    std::cout << "\nValor da variável ptr: " << ptr << std::endl;
    std::cout << "\nValor do endereço de variável numero: " << &numero << std::endl;
    std::cout << "\nValor do endereço de variável ptr: " << &ptr << std::endl;
    std::cout << "\nValor da variável numero(ptr): " << *ptr << std::endl;
    *ptr=20963;
    std::cout << "\nValor da variável numero(ptr): " << *ptr << std::endl;

    system("PAUSE");
    
    return 0;
}