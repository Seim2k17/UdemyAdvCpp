#include <iostream>
#include <string>

using namespace std;

class Test
{
private:
	int id;
	string name;

public:
	Test()
		: id(0)
		, name("")
	{
	}

	Test(int _id, string _name)
		: id(_id)
		, name(_name)
	{
	}

	void print()
	{
		cout << id << ": " << name << endl;
	}

	const Test& operator=(const Test& other)
	{
		name = other.name;
		cout << " Assignment Operator Call." << endl;
		return *this;
	}

	//copy constructor
	Test(const Test& other)
	{
		cout << "Copy Constructor Call " << endl;
		id = other.id;
		name = other.name;
	}

	// we return a reference of type ostream
	// first argument is of Type ostream (e.g. 'cout'), second argument is the type of the object we want the new functionality-> here: test)
	// we need to make the private members of Test visible to outside world so we declare either getters or make the function a friend !
 	friend ostream &operator<<(ostream &out, const Test &test)
 	{
		out << test.id << ": " << test.name;
		return out;
 	}
};

/*
int main()
{

	Test test1(10, "mike");
	test1.print();

	cout << test1 << endl;

	char bla;
	cin >> bla;

	return 0;
}
*/