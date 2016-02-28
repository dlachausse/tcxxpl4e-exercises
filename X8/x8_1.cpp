int main()
{
	char c {'C'};
	int i {-42};

	char* pc {&c};
	int ia[10] {0, 1, 2, 3, 4, 5, 6, 7, 9};
	const char* pcs[] {"Hello", "World", "You", "Stay", "Classy", "San Diego"};
	char** ppc {&pc};
	const int ans {42};
	const int* pci {&ans};
	int* const cpi {&i};
}
