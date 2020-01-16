#include <iostream>
#include <functional>

using namespace std;
using namespace placeholders;

// practice:
// 1. binding without args
// 2. with hardcoded args
// 3. with placeholders and mixed orders
// 4. function types
// 5. Methods and to static methods

class Test
{
public:
	int add(int a, int b, int c)
	{
		cout << a << "," << b << "," << c << endl;
		return a + b + c;
	}
};

int add(int a, int b, int c)
{
    cout << a << "," << b << "," << c << endl;
    return a + b + c;
}

int run(function<int(int, int)> func)
{
	return func(7, 10);
}

/*
int main()
{
	// bind(function-pointer, args
	auto calc = bind(add, 3, 4, 5);
	auto calc2 = bind(add, _1, _2, _3);
	auto calc3 = bind(add, _2, _3, _1);
	auto calc4 = bind(add, _2, _1, 20);

	Test test;
	auto calc5 = bind(&Test::add, test, _2, _1, 25);
	cout << endl;
	cout << calc5(1, 2) << endl;

	cout << calc() << endl;
	cout << endl;
	cout << calc2(1, 2, 3) << endl;
	cout << endl;
	cout << calc3(1, 2, 3) << endl;
	cout << endl;
	cout << calc4(15, 25) << endl;
	cout << endl;
	cout << run(calc4);
	

    char blah;
    cin >> blah;
    return 0;
}
*/