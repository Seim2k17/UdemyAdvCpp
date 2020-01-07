#include "Complex.h"
#include <string>
#include <iostream>
using namespace std;

template<class T>
void print(T n)
{
    cout << "Template Version " << n << endl;
}


void print(int value)
{
	cout << "Non-Template Version " << value << endl;
}

template<class T>
void show()
{

	cout << T() << endl;
}

/*
int main()
{
    print<int>(5);
    print<string>("hello");
	Complex c(5,-2);
    print<Complex>(Complex(5, -2));

	print<>(7);
	print(7);
	print("Hi there.");
	
	show<int>();

    char bla;
    cin >> bla;
    return 0;
}
*/