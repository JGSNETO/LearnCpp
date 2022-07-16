#include <iostream>

class c1{
    int i = 0;
public:
    void setvalue(int value){ i = value;}
    int getValue(){return i;}
};

int main() {
    int i = 47;
    c1 ol;
    ol.setvalue(i);
    printf("Value is %d\n", ol.getValue());
    system("PAUSE");
    return 0;
}