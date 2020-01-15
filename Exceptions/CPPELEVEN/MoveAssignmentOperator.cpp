#include <iostream>
#include <vector>
using namespace std;

class TestClass
{
	static const int SIZE = 10;

	// if we don´t allocate memory we want to make sure it´s NULL                  
	int* _pBuffer{ nullptr };


public:
	TestClass()
	{
		cout << "Non-Parametric Constructor" << endl;
		_pBuffer = new int[SIZE] {};
		cout << "init Buffer: " << *_pBuffer << endl;
	}

	~TestClass()
	{
		delete[] _pBuffer;
		cout << "Free Memory in Destructor" << endl;
	}

	// we also need to allocate memory in the copyconstructor / so we simply call the std-Ctor
	TestClass(const TestClass& other) : TestClass()
	{
		cout << "CopyConstructor" << endl;

		//memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
	}

	// MoveConstructor
	TestClass(TestClass&& other)
	{
		// we can put in a test that other != self but J.P.: "if it´s the same you deserve the problems you´ll get" XD , so he don´t put the test here
		_pBuffer = other._pBuffer;
		// test With and without
		other._pBuffer = nullptr;
	}

	void AddNumberToBuffer(int Value)
	{
		_pBuffer[0] = Value;
	}

	void ShowBuffer()
	{
		for (int i = 0; i < SIZE; i++)
		{
			cout << _pBuffer[i] << endl;
		}
	}

	TestClass operator=(const TestClass& other)
	{
		cout << "Assignment-Op." << endl;
		return *this;
	}

	// MoveaAssignment Operator (mutable RValueReference)
	TestClass operator=(TestClass&& other)
	{
		cout << "Move-Assignment Operator" << endl;
		delete[] _pBuffer;
		_pBuffer = other._pBuffer;
		other._pBuffer = nullptr;

		return *this;

	}


	friend ostream& operator<<(ostream& out, const ofstream& test);
};

ostream& operator<<(ostream& out, const TestClass& test)
{
	out << "Hello from test: ";
	//out << test._text;
	return out;
}

/*
int main()
{
	{
// 		TestClass test1;
// 		test1.AddNumberToBuffer(123);
// 		test1.ShowBuffer();

		TestClass test2;
		test2 = TestClass();
		

		char bla;
		cin >> bla;



	} // just to call the destructors, just cosmetic (out of scope)

	char bla2;
	cin >> bla2;

	return 0;
}
*/