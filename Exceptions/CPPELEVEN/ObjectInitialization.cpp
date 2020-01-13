#include <iostream>
#include <string>

using namespace std;

class Test
{
    int id{3};
    string name{"Dude"};

public:
    Test() = default;
	// explcicitly use the default implementations for operatior = and the copyconstructor
	
	Test& operator=(Test& other) = default;
	// Test& operator=(Test& other) = delete;
	
	Test(const Test& other) = default;
	// Test(const Test& other) = delete;

    Test(string _name)
        : name(_name)
    {
    }

    void print()
    {
        cout << "Id: " << id << ", Name: " << name << endl;
    }
};

/*
int main()
{
    Test test1;
    test1.print();

    cout << " -------------- " << endl;

    Test test2("Elvira");
    test2.print();

	cout << "Test3" << endl;
	// Test test3 = test2;
	// Test test3(test2);
	Test test3;
	test3 = test2;
	test3.print();

    char bla;
    cin >> bla;
    return 0;
}
*/