#include <iostream>

// The following macro combined with the print_sz template function provide a convenient
// shorthand for printing the size of any C++ type
#define print_size(type)	print_size_helper<type>(#type)
template<typename T>
void print_size_helper(const char* n)
{
	using namespace std;
	cout << "sizeof(" << n << ") = " << sizeof(T) << endl;
}

int main()
{
	using namespace std;

	//Boolean
	print_size(bool);

	//Character
	print_size(char);
	print_size(wchar_t);
	print_size(char16_t);
	print_size(char32_t);

	//Integer
	print_size(int);
	print_size(short);
	print_size(long);
	print_size(long long);

	//Floating point
	print_size(float);
	print_size(double);
	print_size(long double);

	//Pointers
	print_size(bool*);
	print_size(char*);
	print_size(char[42]);
	print_size(int*);
	print_size(double*);

	//Enums
	enum Weekday { Sun, Mon, Tue, Wed, Thu, Fri, Sat };
	enum class Continents { Africa, Antarctica, Asia, Europe, NorthAmerica, SouthAmerica };

	print_size(Weekday);
	print_size(Continents);
	print_size(Weekday*);
	print_size(Continents*);
}
