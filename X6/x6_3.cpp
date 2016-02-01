#include <iostream>
#include <chrono>

int main()
{
    auto before = std::chrono::system_clock::now();
    long j {1};
    for(long i = 1; i < 100000000; ++i)
    {
        j *= i;
        j /= i;
        j += i;
        j -= i;
    }
    auto after = std::chrono::system_clock::now();
    
    auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(after - before);
    
    std::cout << ms.count() << "ms\n";
    
    return j - 1;
}
