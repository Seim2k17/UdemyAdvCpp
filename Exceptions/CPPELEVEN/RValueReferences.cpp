#include <iostream>
#include <vector>

using namespace std;
class Test
{
private:
    static const int SIZE = 100;

    // membervariables starts as common practice with _ so we see them directly
    int* _pBuffer;
    string _text{"TestText"};

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
		 _pBuffer = new int[SIZE]{};

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
// 	//out << test._text;
// 	return out;
// }

Test getTest5()
{
    return Test();
}

void check(const Test& value)
{
	cout << "lValue function!" << endl;
}

void check(Test&& value)
{
	cout << "rValue function!" << endl;
}

/*
int main()
{
    Test test2 = getTest5();

    Test& rTest2 = test2;

    cout << rTest2 << ": Val" << test2 << endl;

    // we can bind RValueReference to RValues !!!
    Test&& rTest3 = 7;

    Test&& rTest4 = getTest5();

    cout << "RValueReference: " << rTest4 << endl;

	cout << "=============" << endl;

	check(test2);
	//check(getTest5());
	//check(Test());

    char bla;
    cin >> bla;
    return 0;
}
*/