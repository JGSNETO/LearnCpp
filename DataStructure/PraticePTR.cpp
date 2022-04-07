#include <iostream>
#include <string>

struct Data
{
    int Dia;
    int Mes;
    int Ano;
    Data(){std::cout << "Construtor de Data iniciado\n";}
    ~Data(){std::cout << "Destrutor\n";}
};

int main()
/*
{
    {
    Data Agenda;
    //std::cout << "Dia: " << Agenda.Dia << "\n";
    }
    system("PAUSE");
    return 0;
}*/
//Com ponteiro
{
    //Agora o objeto está na heap e não será destruido ao fim do escopo
    Data *Agenda3 = new Data; 

    system("PAUSE");
    return 0;
}