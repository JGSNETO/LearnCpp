#include <iostream>

using namespace std;

//Class creator
class rock {
public:
    rock(){}
    char _type[10];
    char *getType(){
        return _type;
    }
};


//Concrete product
class smallRock:public rock{
public:
    smallRock(){
        //_type = "Small";
        cout << "\nSmall rock created" << endl;
    }
};


//Concrete product
class midRock:public rock{
public:
    midRock(){
        //_type = "mid";
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
    system("PAUSE");
    return 0;
}



