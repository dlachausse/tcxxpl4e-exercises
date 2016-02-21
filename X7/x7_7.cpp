#include <iostream>

void print_char_val(const char c)
{
	using namespace std;
	
	int i = static_cast<int>(c);
	cout << c << '\t' << dec << i << '\t' << hex << i << '\n';
}

void print_char_range(const char a, const char z)
{
	for(char c = a; c != z + 1; ++c)
	{
		print_char_val(c);
	}
}

int main()
{
	//Print a heading
	std::cout << "char\tint\thex\n"
	          << "====\t===\t===\n";

	print_char_range('a', 'z');
	print_char_range('0', '9');

	print_char_val('!');
	print_char_val('@');
	print_char_val('#');
	print_char_val('$');
	print_char_val('%');
	print_char_val('^');
	print_char_val('&');
	print_char_val('*');
	print_char_val('(');
	print_char_val(')');
	print_char_val('-');
	print_char_val('+');
}
