#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

class Test
{
public:
    Test()
    {
    }

	int _name = 5;
};

/*
int main()
{
    int value;
    char tschar;
    double dabbel;
	long dabbel32;
    float fliess;
    string Schtring;
	Test test;

    cout << typeid(value).name() << endl;
    cout << typeid(tschar).name() << endl;
    cout << typeid(dabbel).name() << endl;
	cout << typeid(dabbel32).name() << endl;
    cout << typeid(fliess).name() << endl;
    cout << typeid(Schtring).name() << endl;
	cout << typeid(test).name() << endl;
	cout << typeid(test._name).name() << endl;
    
	decltype(Schtring) otherString = "bla";

	cout << otherString;
	
	char bla;
    cin >> bla;
    return 0;
}
*/