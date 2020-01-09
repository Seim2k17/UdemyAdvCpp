#include <iostream>
#include <string>
using namespace std;

int main()
{

	// int
	int value{5};
	cout << value << endl;
	
	// arrays
	int values[]{2,5,3};
	cout << values[2] << " " << values[0] << " " << values[1] << endl;

	string text{ "bla" };
	cout << text << endl; 

	char bla;
	cin >> bla;

	return 0;
}
