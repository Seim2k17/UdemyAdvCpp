#include <iostream>


class AllocMemory
{
public:
	AllocMemory()
	{
		char *pIntMem = new char[2099999999];
		delete[] pIntMem;
	}
};

/*
int main()
{
	
	try 
	{
		AllocMemory test;
	}
	catch (std::bad_alloc &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	
	int bla;
	std::cin >> bla;
	return 0;
}
*/