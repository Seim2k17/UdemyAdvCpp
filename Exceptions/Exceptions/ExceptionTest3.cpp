#include <iostream>
using namespace std;

class CanGoWrong {

public:
	CanGoWrong()
	{
		// memoryAllocation
		char *pMemory = new char[2099999999];
		delete[] pMemory;
	}
};
/*
int main()
{
	int bla;

	try
	{
		CanGoWrong wrong;
	}
	catch (bad_alloc& ba)
	{
		cout << " Exception: " << ba.what();
	}
	
	std::cin >> bla;
	return 0;
}
*/