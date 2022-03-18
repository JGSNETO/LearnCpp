#include <iostream>

/**
 * A execução é de cima para baixo== TOP-DOWN. 
 * Protótipos é a forma que você declara o cabeçalho da função em cima, para avisar ao compilador que a função existe
 * porém ela só é implementada ao fim do código
*/
//Cabeçalho
//Protótipo
float Soma(float a, float b);

int main()
{
    Soma(100,500);
    std::cout << Soma(100,500) << std::endl; 
    return 0;
}

float Soma (float a, float b)
{
    return a + b;
}