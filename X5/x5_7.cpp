#include <vector>
#include <iostream>
#include <algorithm>

template <typename T>
void print_vector(const std::vector<T>& v)
{
    for(auto i : v)
    {
        std::cout << i << " ";
    }
}

int main()
{
    std::vector<int> v {5, 9, -1, 200, 0};
    
    print_vector(v);
    
    std::sort(v.begin(), v.end());
    std::cout << "\n\nSorted...\n";
    print_vector(v);
}
