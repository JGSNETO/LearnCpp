#include <iostream>

using namespace std;


class Door{
public:
    Door(){}
    virtual void Open() = 0;
};

class GasCarDoor : public Door{
public:
    GasCarDoor(){cout<<"Making a door for a gas car"<< endl;}
    void Open(){cout << "Click" << endl;}
};

class ElectricCarDoor : public Door{
public:
    ElectricCarDoor(){cout << "Making a door for a electrical car" << endl;}
    void Open(){cout << "shhhh" << endl;}
};

class Engine{
public:
    Engine(){cout<<"Vrum"<<endl;}
    virtual void Run() {};
};

class GasCarEngine : public Engine{
public:
    GasCarEngine(){ cout<< "Making an engine for a gas car" <<endl;}
    void Run(){cout<<"Gas engine runing"<<endl;}
};

class ElectricEngine : public Engine{
public:
    ElectricEngine(){cout<<"Making an engine for a electrical car"<<endl;}
    void Run(){cout<<"Electrical engine runing"<<endl;}
};

class CarFactory
{
public:
	virtual Door* BuildDoor() = 0;
	virtual Engine* BuildEngine() = 0;
};

class GasCarFactory :public CarFactory
{
public:
	Door * BuildDoor()
	{
		return new GasCarDoor();
	}
	Engine* BuildEngine()
	{
		return new GasCarEngine();
	}
};

class ElectricCarFactory :public CarFactory
{
public:
	Door * BuildDoor()
	{
		return new ElectricCarDoor();
	}
	Engine* BuildEngine()
	{
		return new ElectricEngine();
	}
};

int main()
{
	CarFactory* CarPlant;
	int choice;

	cout << "Select a car type: " << endl;
	cout << "1: Gasoline" << endl;
	cout << "2: Electric" << endl;
	cout << "Selection: ";
	cin >> choice;
	cout << endl;

	switch (choice)
	{
	case 1:
		CarPlant = new GasCarFactory;
		break;
	case 2:
		CarPlant = new ElectricCarFactory;
		break;
	default:
		cout << "Invalid Selection" << endl;
		CarPlant = NULL;
		break;
	}

	if (CarPlant != NULL)
	{
		Door* myDoor = CarPlant->BuildDoor();
		Engine* myEngine = CarPlant->BuildEngine();

		myDoor->Open();
		myEngine->Run();
	}
    system("PAUSE");
    return 0;
}
