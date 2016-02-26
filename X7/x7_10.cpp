#include <iostream>

// The following macro combined with the print_align_helper template function 
// provide a convenient shorthand for printing the alignment (in number of 
// chars) of any C++ type
#define print_align(type)	print_align_helper<type>(#type)
template<typename T>
void print_align_helper(const char* n)
{
	using namespace std;
	
	cout << "alignment of " << n << " in number of chars is: " << 
			alignof(T) << endl;
}

int main() 
{
	print_align(bool);
	print_align(char);
	print_align(short);
	print_align(int);
	print_align(long);
	print_align(long long);
	print_align(float);
	print_align(double);
	print_align(long double);
	print_align(unsigned);
	print_align(unsigned long);
}
