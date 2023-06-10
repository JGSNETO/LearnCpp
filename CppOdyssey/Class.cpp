#include <iostream>
#include <string>

class Person{
private:
    int age;
    double height;
    std::string job;

public:
    Person(int age, double height, const std::string& job){
        this->age = age;
        this->height = height;
        this->job =job;
        std::cout<<" Person object created" << std::endl;
    }

    ~Person(){
        std::cout<<"Person object destroyed" << std::endl;
    }

    void displayInfo(){
        std::cout << "Age: " << age << std::endl;
        std::cout << "Height: " << height << std::endl;
        std::cout << "Job: " << job << std::endl;
    }
};

int main(){

    Person person(30, 1.75, "Engineer");

    person.displayInfo();

    return 0;

}
