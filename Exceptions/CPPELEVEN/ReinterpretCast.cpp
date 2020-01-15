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


int main()
{
    {
		Parent parent;
		Brother brother;
		Sister sister;

		int value = 8;
		int* pValue = &value;

		// Parent* pP = &parent; // -> dynamic_cast returns nullptr
		Parent* pP = &brother;

		//Sister* pS = dynamic_cast<Sister*>(pP);
		//Sister* pS = static_cast<Sister*>(pP);
		Sister* pS = reinterpret_cast<Sister*>(pP);

		if (pS == nullptr)
		{
			cout << "Invalid Cast" << endl;
		}
		else
		{
			cout << pS << endl;
		}

		Sister* pS1 = &sister;
		
		cout << "Before Cast" << pS1 << ", " << pValue << endl;

		pS1 = reinterpret_cast<Sister*>(pValue);
		
		cout << "After Cast" << pS1 << " : " << pValue << endl;
    }

    char blah;
    cin >> blah;
}

