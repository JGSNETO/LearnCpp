/**
 * @file Source.cpp
 * @author José Gomes
 * @brief This file is a quick resume about static variables; constant and global.
 * @version 1.0
 * @date 2022-03-17
 * 
 * @copyright Copyright (c) 2022
 * 
 * Variáveis locais estáticas tem um escopo local, mas elas não desaparecem quando você sai da função.
 * Ao colocar um modificador static você indica ao compilador que deseja que a variável permaneça na memória
 * após a saída da função
 */

#include <iostream>

int ContadordeChamada()
{
    // Significa que após a saída da função o valor desta variável não será perdido. 
    //Static indica que este valor seja mantido mesmo após a função ser encerrada. 
    static int numchamada = 0;
    numchamada++;
    return numchamada;
}
int main()
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << ContadordeChamada() << std::endl;
    }
    system("PAUSE");
    return 0;
}