#include <iostream>
#include <fstream>

int main()
{
    const char* filename = "integers.txt";
    std::ifstream in(filename);
    
    int i;
    while(in >> i)
    {
        std::cout << i << '\n';
    }
    
    in.close();
}