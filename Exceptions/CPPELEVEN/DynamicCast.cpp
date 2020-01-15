#include <iostream>

using namespace std;

class Parent
{
	virtual void speak() {}
};

class Brother : public Parent
{
	/*
	int _value = 9;
public:
	void printValue()
	{
		cout << _value << endl;
	}
	*/
	void speak() override
	{}
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

		// Parent* pP = &parent; // -> dynamic_cast returns nullptr
		Parent* pP = &brother;

		Brother* pB = dynamic_cast<Brother*>(pP);

		if (pB == nullptr)
		{
			cout << "Invalid Cast" << endl;
		}
		else
		{
			cout << pB << endl;
		}
		
    }

    char blah;
    cin >> blah;
}

*/