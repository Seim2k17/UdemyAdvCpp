#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

// test has a FunctionPointer with no returnType as a Parameter called pFunc
void testPrint(void (*pFunc)())
{
	pFunc();
}

/*
int main()
{
	// the simplest example of a lambda expr.
	[]() {};
	
	auto func = []() {cout << "Hello Lamdba" << endl; };

	testPrint(func);
	//func();
	string func1;

	testPrint([]() {cout << "HelloAgain" << endl; });

	cout << "Type of Lambda: " << typeid(func).name() << endl;
	// we can do this but as its a real bracket Party its common use tos tore this in a  variable
	[]() {cout << "Lamdba2." << endl; }();

	char bla;
	cin >> bla;
	return 0;
}

*/