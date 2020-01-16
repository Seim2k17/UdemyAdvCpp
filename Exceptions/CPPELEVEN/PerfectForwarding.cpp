#include <iostream>

using namespace std;

class TestClass9 {

};

template<class T>
void call(T&& arg)
{
	// activate Perfect Forwarding
	// check(static_cast<T>(arg));
	check(forward<T>(arg));
}

void check(TestClass9& test)
{
	cout << "lvalue: " << endl;
}

void check(TestClass9&& test)
{
	cout << "rvalue: " << endl;
}

/*
int main()
{
	{
		TestClass9 test;

		// auto&& t = TestClass9();
		auto&& t = test;
		check(TestClass9());

		//call(test);
		call(TestClass9());

		//call(&7);
	}

	char bla;
	cin >> bla;
	return 0;
}
*/