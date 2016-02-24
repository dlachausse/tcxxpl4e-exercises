#include <iostream>
#include <limits> 
#include <cstring>

// The following macro combined with the print_limits template function provide a convenient
// shorthand for printing the largest and smallest values of any C++ type
#define print_limits(type)	print_limits_helper<type>(#type)
template<typename T>
void print_limits_helper(const char* n)
{
	using namespace std;
	using nlt = numeric_limits<T>;

	bool is_char {!strcmp(n, "char")}; //Test to see if it's a char

	cout << "largest " << n << " is " << 
		//Convert character value to int so it prints properly to the screen
		(is_char?nlt::max():static_cast<int>(nlt::max())) << 
		"; smallest is " << 
		//...ditto
		(is_char?nlt::min():static_cast<int>(nlt::min())) << endl;
}

int main() 
{
	print_limits(bool);
	print_limits(char);
	print_limits(short);
	print_limits(int);
	print_limits(long);
	print_limits(long long);
	print_limits(float);
	print_limits(double);
	print_limits(long double);
	print_limits(unsigned);
	print_limits(unsigned long);
}
