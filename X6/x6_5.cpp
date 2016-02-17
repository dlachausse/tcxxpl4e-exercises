#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <regex>

int main(int argc, char* argv[])
{
	using namespace std;

	if(argc != 2)
	{
		cout << "Please provide a filename via the command line\n";
		return -1;
	}

	ifstream fin(argv[1]);
	stringstream buf;
	buf << fin.rdbuf();

	string s = buf.str();

	smatch matches;
	regex pat(R"(\d+\.?\d*)");

	while(regex_search(s, matches, pat))
	{
		cout << matches[0] << ' ';
		s = matches.suffix().str();
	}
	cout << endl;
}

