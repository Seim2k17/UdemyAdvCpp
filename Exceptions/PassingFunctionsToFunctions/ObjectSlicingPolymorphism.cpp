#include <iostream>
using namespace std;

class Parent
{
private:
    int one;

public:
    virtual void print()
    // void print()
    {
        cout << "PrintParent" << endl;
    }

    Parent()
        : one(0)
    {
		cout << "Ctor parent" << endl;
    }

    Parent(const Parent& other)
        : one(0)
    {
		cout << "Copy parent" << endl;
    }
};

class Child : public Parent
{
private:
    int two;

public:
    Child()
        : two(2)
    {
		cout << "Ctor Child" << endl;
    }

    void print()
    {
        cout << "PrintChild" << endl;
    }
};

/*
int main()
{
    cout << "create objects" << endl;
	
	Child c1;
    Parent p1;

	cout << "create reference" << endl;

    Parent& P1 = p1;
    P1.print();

    cout << "create parent object and assign childclass." << endl;


    Parent P2 = Child();
    P2.print();

    char bla;
    cin >> bla;

    return 0;
}
*/