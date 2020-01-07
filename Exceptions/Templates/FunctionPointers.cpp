#include <iostream>
#include <string>
using namespace std;

void test()
{
    cout << "Foo-" << endl;
    cout << "-bar" << endl;
}

string test2(string value)
{
	string st = "Value: " + value;
    return st;
}

int main()
{
    // test();

    void (*pTest2)();
    void (*pTest)();

    // as we need not to call we don´t need the ( )
    pTest = &test;
    (*pTest)();

    // but this can also be minimized to, because the name of a function is also a function pointer: WOW this is soooo cool:
    cout << "pTest2:" << endl;
    pTest2 = test;
    pTest2();

    // or
    void (*pTest3)() = test;
    cout << " pTest3: " << endl;
    pTest();

	// with parameters

	string(*pTest4)(string) = test2;
	string test43 = pTest4("8");
	cout << "test43: " << test43;

    char bla;
    cin >> bla;
    return 0;
}
