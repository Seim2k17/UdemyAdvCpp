#include <iostream>
#include <string>
#include <vector>

// more academic but important to know

using namespace std;

class Test
{
private:
    static const int SIZE = 100;

    // membervariables starts as common practice with _ so we see them directly
    int* _pBuffer;

public:
    Test()

    {
        cout << "Non Implicit No-Parametric C´tor" << endl;

        // set this to ZERO 3ways: all the bytes will be set to 0

        // 1. old school way; the individual bytes will be set to VALUE (sec. parameter), then the number of bytes; some say this is prone ....
        // _pBuffer = new int[SIZE];
        // memset(_pBuffer, 0, sizeof(int)*SIZE);

        // 2.
        // _pBuffer = new int[SIZE](); // -> set everything to 0

        // 3. c++11 style
        _pBuffer = new int[SIZE]{};

        // just to prove it´s emptied with 0
        cout << *_pBuffer << endl;
    }

    Test(int _id)
    {
        cout << "Parametric C´tor" << endl;

        _pBuffer = new int[SIZE]{};
    }

    Test(const Test& other)
    {
        cout << "Copy-C'tor" << endl;

        memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
    }

    Test& operator=(const Test& other)
    {
        cout << "Assignment-Op." << endl;
        return *this;
    }

    ~Test()
    {
        cout << "Destructor called." << endl;
        // free memory
        delete[] _pBuffer;
    }

    friend ostream& operator<<(ostream& out, const ofstream& test);
};

// ostream& operator<<(ostream& out, const Test& test)
// {
//     out << "Hello from test: ";
//     return out;
// }

Test getTest4()
{
    return Test();
}

/*
int main()
{
	Test test1 = getTest4();
	cout << test1 << endl;

	
	
	// doesn´t work because  rTest is a LValReference und getTest4() returns a RValue
	//Test& rTest = getTest4();

	// ... but when putting it const, the lifetime of the temporary object gehts extended / as long as rTest-Reference exist the returned Object from getTest4() also exists
	const Test& rTest = getTest4();

	char blub;
	cin >> blub;
	return 0;
}

*/
