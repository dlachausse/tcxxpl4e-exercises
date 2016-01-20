#include <iostream>
#include <string>

int main()
{
    bool b;
    char c;
    int i;
    double d;
    std::string s;
    
    std::cout << "Gimme a bool: ";
    std::cin >> b;
    
    std::cout << "Gimme a char: ";
    std::cin >> c;
    
    std::cout << "Gimme an int: ";
    std::cin >> i;
    
    std::cout << "Gimme a double: ";
    std::cin >> d;
    
    std::cout << "Gimme a string: ";
    std::cin >> s;
    
    std::cout << b << '\n' << c << '\n' << i << '\n' << d << '\n' << s << '\n';
}