#include<iostream>
#include<stdio.h>


class c1{
private:
    int _a = 0;
    int _b = 0;
    int _c = 0;
public:
    c1(int i = 0);
    ~c1();
    int a() {return _a;}
    int b() {return _b;}
    int c() {return _c;}
};

c1::c1(int i) : _a(i), _b(i+1), _c(i+2){
    printf("Constructor");
}
c1::~c1(){
    printf("Destructor");
}

int main(){
    c1 *ol = new c1;
    printf("ol: %d, %d, %d\n", ol->a(), ol->b(), ol->c());
    delete ol;

    system("PAUSE");
    return 0;
}