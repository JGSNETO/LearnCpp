#include <iostream>

enum class Day{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main(){

    Day today = Day::Wednesday;

    switch (today)
    {
    case "Monday":
        std::cout<<"It´s monday" << std::endl;
        break;
    case Day::Tuesday:
    case Day::Wednesday:
    case Day::Thursday:
        std::cout << "Week days" <<std::endl;
        break;
    case Day::Saturday:
    case Day::Sunday:
        std::cout << "Weekend" << std::endl;
        break;
    default:
        break;
    }
    return 0;
}