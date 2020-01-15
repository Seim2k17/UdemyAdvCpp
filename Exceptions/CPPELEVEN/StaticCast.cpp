#include <iostream>

using namespace std;

class Parent
{
};

class Brother : public Parent
{
	int _value = 9;
public:
	void printValue()
	{
		cout << _value << endl;
	}
};

class Sister : public Parent
{
};

/*
int main()
{
    {
		Parent parent;
		Brother brother;

		float value = 3.23;

		cout << value << " : C-style cast: " << (int)value << endl;

		cout << value << " : static cast: " << static_cast<int>(value) << endl;

		cout << "==========" << endl;


		// due polymorphism without casting
		Parent* pP = &brother;
		brother.printValue();


		// other way does not work of course out of the box
		// Brother *pB = &parent;
		Brother* pB = static_cast<Brother*>(&parent);
		pB->printValue();

		Brother* pBP = static_cast<Brother*>(pP);
		pBP->printValue();

    }

    char blah;
    cin >> blah;
}
*/
