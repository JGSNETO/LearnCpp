#include<iostream>
//POLIMORPHISM
class sound {

public:
    void barulho(){std::cout << "RUUUUU" << std::endl;}
};

class cat : public sound{

public:
    void barulho(){std::cout <<"MIAU"<<std::endl;}
};
int main(){
    cat cat;
    cat.barulho();
}