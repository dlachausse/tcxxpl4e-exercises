#include <iostream>
#include <fstream>

int main()
{
    const char* filename = "integers.txt";
    const int NUM_INTS = 300;
    
    std::ofstream out(filename);
    
    for(int i = 0; i != NUM_INTS; ++i)
    {
        out << i; out << '\n';
    }
    out.close();
}