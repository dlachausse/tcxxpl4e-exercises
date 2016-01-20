#include <iostream>
#include <string>

int main()
{
    bool b = true;
    char c = 'C';
    int i = 42;
    double d = 3.14;
    std::string s ="C++";
    
    std::cout   << "bool:   " << b << '\n' 
                << "char:   " << c << '\n'
                << "int:    " << i << '\n'
                << "double: " << d << '\n'
                << "string: " << s << '\n';
}