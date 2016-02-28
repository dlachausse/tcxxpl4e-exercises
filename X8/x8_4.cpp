#include <iostream>

int between(char* a, char* b)
{
	return static_cast<int>(b - a);
}

int main()
{
	char str[] = "Hello World!  You stay classy San Diego!";
	char* a = &str[0];
	char* b = &str[6];
	char* c = &str[14];

	using namespace std;
	cout << "In the string: " << str << endl <<
		"The number of characters between '" << *a << "' and '" << *b << "' is " << 
		between(a, b) << endl <<
		"and the number of characters between  '" << *c << "' and '" << *c << 
		"' is " << between(c, c) << endl;
}
