#include <iostream>
#include <string>

using namespace std;

class Parent
{
private:
	int dogs{3};
    string text;

public:
    
	Parent() : Parent("Bennie")
    {
		dogs=5;
		cout << "DefaultConstructor" << endl;
    }
	

	
    Parent(string _text)
        : text(_text)
    {
        cout << "Text-Parameter-Constructor." << endl;
    }

	void print()
	{
		cout << dogs << ": " << text << endl;
	}
	
};

class Child : public Parent
{
public:
    Child() : Parent("Doggy")
    {
    }
};

/*
int main()
{

	cout << "Creating parent." << endl;
	Parent parent;
	parent.print();
	cout << "Creating child." << endl;
	Child child;
	child.print();

    char blub;
    cin >> blub;
    return 0;
}
*/