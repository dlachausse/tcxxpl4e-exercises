#include <iostream>

// The following macro combined with the print_size_helper template function 
// provide a convenient shorthand for printing the size (in number of chars) 
// of any C++ type
#define print_size(type)	print_size_helper<type>(#type)
template<typename T>
void print_size_helper(const char* n)
{
	using namespace std;
	
	cout << "size of " << n << " in number of chars is: " << 
			sizeof(T)/sizeof(char) << endl;
}

int main() 
{
	print_size(bool);
	print_size(char);
	print_size(short);
	print_size(int);
	print_size(long);
	print_size(long long);
	print_size(float);
	print_size(double);
	print_size(long double);
	print_size(unsigned);
	print_size(unsigned long);
}
