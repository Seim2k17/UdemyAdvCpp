#include <iostream>
#include <string>

// more academic but important to know

using namespace std;

// Class with C´tdor, C´tdor(parmeter), Copy-C´tdor, AssignOp, De´tdor, <<-Op

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

/*
ostream& operator<<(ostream& out, const Test& test)
{
    out << "Hello from test: ";
    return out;
}
*/

Test getTest3()
{
    return Test();
}

/*
int main()
{
    Test test1;

	int value1 = 7;

	int* pValue = &value1;

	cout << value1 << " @Adress:  " << pValue << endl;

	// & on constant/R-Values isn´t allowed
	// int* pValue2 = &8;

	Test* pTest = &test1;
	cout << test1 << " @Adress:  " << pTest << endl;

	// Hmmmm std:: vs installation alows this becauis some language extensions are enabled by default; when disabling it we can´t compile this code
	// Test* pTest2 = &getTest3();
	// cout << test1 << " @Adress:  " << pTest2 << endl;

	// Post inc does work
	int* pValue3 = &++value1;
	cout << value1 << " @Adress:  " << pValue3 << endl;

	// &value1++ is not a l value
	// int* pValue4 = &value1++;
	// cout << value1 << " @Adress:  " << pValue4 << endl;

	int pValue5 = 7 + value1;
	//int* pValue5 = &(7 + value1);

	cout << (7 + value1) << " @Adress:  " << pValue5 << endl;

    char blub;
    cin >> blub;
    return 0;
}
*/
