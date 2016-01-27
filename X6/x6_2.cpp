#include <iostream>
#include <thread>
#include <chrono>

inline void wait_a_second()
{
    std::chrono::seconds a_second(1);
    std::this_thread::sleep_for(a_second);
}

void hello()
{
    for(;;)
    {
        wait_a_second();
        std::cout << "hello\n";
    }
}

void world()
{
    for(;;)
    {
        wait_a_second();
        std::cout << "world!\n";
    }
}

int main()
{
    std::thread h(hello);
    std::thread w(world);
    
    h.join();
    w.join();
}
