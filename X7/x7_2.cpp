#include <iostream>
#include <limits>

int main()
{
	using namespace std;

	if(!numeric_limits<char>::is_signed)
	{
		cout << "un";
	}
	cout << "signed\n";
}

