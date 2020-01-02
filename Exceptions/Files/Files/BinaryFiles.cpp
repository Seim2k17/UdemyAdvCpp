#include <iostream>
using namespace std;


// disable packing; in one byte-steps
 #pragma pack(push, 1)

struct Person
{
public:
	// this will be a problem when moving the program to another machine (test it at home ! ); when moving the struct to a binary file
	// string name;
	// instead we use a Char-Array
	// but c++ padds the struct for efficiency
	// char name[50];
	char bla;
	
	double weight;
	int age;
	//char blub;
};

// enable packing / padding
#pragma pack(pop)

int main()
{
	// 
	long long blae;
	cout << sizeof(Person) << endl;
	cout << sizeof(blae) << endl;
	char bla;
	cin >> bla;
    return 0;
}
