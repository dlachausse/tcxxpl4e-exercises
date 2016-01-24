#include <iostream>
#include <string>

class NameAge
{
public:
    std::string name;
    int age;
};

std::ostream& operator<<(std::ostream& os, const NameAge& na)
{
    os << na.name << "," << na.age;

    return os;
}


std::istream& operator>>(std::istream& is, NameAge& na)
{
    std::string name {};
    char c;
    
    //Read the name
    for(;;)
    {
        c = is.get();
        if(c == ',') break;
        name += c;
    }
    
    //Read the age
    int age {};
    
    is >> age;

    na.name = name;
    na.age = age;
    return is;
}


int main()
{
    const int NUM_PEOPLE {5};
    NameAge nas[NUM_PEOPLE];
    
    for(auto& na: nas)
    {
        std::cout << "What is your name and age? (Separated by a comma) ";
        std::cin >> na;
    }
    for(auto na: nas)
    {
        std::cout << na;
    }
}