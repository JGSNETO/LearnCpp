/**
 * @file OtherOperaions.cpp
 * @author your name (you@domain.com)
 * @brief Atribuindo um ponteiro a outro
 * @version 0.1
 * @date 2022-03-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero {102};
    int *ptr = &numero; 
    int *ptr2;

    ptr2 = ptr; 

    std::cout << "Endereço contido dentro de prt: " << ptr << std::endl;
    std::cout << "Endereço contido dentro de prt2: " << ptr2 << std::endl;
    std::cout << "Endereço de prt na memória ram: " << &ptr << std::endl;
    std::cout << "Endereço de prt2 na memória ram: " << &ptr2 << std::endl;
    std::cout << "O valor de numero agora: " << numero << std::endl;
    *ptr2 = *ptr + 10;

    std::cout << "O valor de numero agora: " << numero << std::endl;
    
    system("PAUSE");
    
    return 0;
}