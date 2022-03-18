/**
 * @file Source.cpp
 * @author José Gomes
 * @brief Introduction about default arguments
 * @version 1.0
 * @date 2022-03-17
 * 
 * @copyright Copyright (c) 2022
 * 
 * Um argumento padrão é o valor usado automaticamente se você omitir o argumento correspondente a uma chamada
 * de função
 * Se por algum motivo o usuário não passar o valor da função, a função pode ter um valor default, definido na declaração
 * 
 */

#include <iostream>

void Coordenadas (int x=5, int y=7, int z=3);
int main()
{
    Coordenadas(5,4);
    system("PAUSE");
    return 0;
}

void Coordenadas(int x, int y, int z)
{
    x *=10;
    y *=10;
    z *=10;

    std::cout << "Valor de x: " << x << std::endl;
    std::cout << "Valor de y: " << y << std::endl;
    std::cout << "Valor de z: " << z << std::endl;
    
    return;
}