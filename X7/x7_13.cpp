#include <iostream>

int main()
{
    using namespace std;
    
    for(int i {4};;)
    {
        cout << i ;
        
        if      (i ==  4)   ++i;
        else if (i ==  5)   i += 4;
        else if (i ==  9)   i += 8;
        else if (i == 17)   i -= 5;
        else break;
        cout << ", ";
    }
    cout << endl;
}