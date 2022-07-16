#include <iostream>

using namespace std;

//Class creator
class rock {
private:
    char _type[10];
public:
    rock(){}
    char *getType(){
        return _type;
    }
};
//Concrete product
class smallRock:public rock{
public:
    smallRock(){
        _type = "small";
        cout << "\nSmall rock created" << endl;
    }
};
//Concrete product
class midRock:public rock{
public:
    midRock(){
        _type = "mid";
        cout<<"\nMid rock created" << endl;
    }
};

/*Creator concrete*/ 
class rockFactoryCreator{
public:
    rock *GetRock(){
        int choice;
        cout << "Select type of rock to make: " << endl;
        cout << "1: Small" << endl;
        cout << "2: Mid" << endl;
        cout << "Selection: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            return new smallRock;
        case 2:
            return new midRock;
        default:
            cout << "Invalid Selection" << endl;
            return NULL;
        }  
    }
};

int main()
{
    rockFactoryCreator rockCreator;
    rock *asteroid; 
    asteroid = rockCreator.GetRock();
    cout <<"\nYou had asked for a(n)" << asteroid->getType() << endl;
    system("PAUSE");
    return 0;
}



