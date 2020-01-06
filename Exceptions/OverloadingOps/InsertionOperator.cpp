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
};

int main()
{

	Test test1(10, "mike");
	test1.print();

	return 0;
}