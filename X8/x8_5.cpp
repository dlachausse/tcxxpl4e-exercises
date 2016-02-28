#include <iostream>

int between(int* a, int* b)
{
	return static_cast<int>(b - a);
}

int main()
{
	int ints[] {0, 42, 3, -12, 1, 4, 16};
	int* a = &ints[3];
	int* b = &ints[5];
	int* c = &ints[1];

	using namespace std;
	cout << "For the array of ints: ";
	for(auto i : ints)
	{
		cout << i << ", ";
	}
	cout << "the distance between " << *a << " and " << *b << " is " <<
		between(a, b) << ", \nand the distance between " << *c << " and " <<
		*c << " is " << between(c, c) << ".\n";
}
