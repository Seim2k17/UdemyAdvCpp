#include <iostream>
#include <string>

using namespace std;

// Class with C´tdor, C´tdor(parmeter), Copy-C´tdor, AssignOp, De´tdor, <<-Op

class Test
{

public:
    Test()

    {
        cout << "Non Implicit No-Parametric C´tor" << endl;
    }

    Test(int _id)
    {
        cout << "Parametric C´tor" << endl;
    }

    Test(const Test& other)
    {
        cout << "Copy-C'tor" << endl;
    }

    Test& operator=(const Test& other)
    {
        cout << "Assignment-Op." << endl;
        return *this;
    }

    ~Test()
    {
        cout << "Destructor called." << endl;
    }

    friend ostream& operator<<(ostream& out, const ofstream& test);
};
/*
ostream& operator<<(ostream& out, const Test& test)
{
    out << "Hello from test: ";
    return out;
}
*/

Test getTest()
{
    return Test();
}

/*
int main()
{
	Test test1 = getTest();

    cout << test1 << endl;

    char bla;
    cin >> bla;
    return 0;
}
*/
