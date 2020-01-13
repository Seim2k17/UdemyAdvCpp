#include <iostream>
#include <string>

using namespace std;

void pNameFunction(void (*funcP)(string))
{
    funcP("Jesus");
    funcP("Armin");
}

void runDivide(double(*funcDivide)(double, double))
{
	cout << funcDivide(9, 3) << endl;

	cout << funcDivide(0, 3) << endl;
}


/*
int main()
{
    auto pName = [](string name) { cout << "Hello " << name << endl; };

    pName("John");

    pNameFunction(pName);

    pNameFunction([](string name) { cout << "Another Call with " << name << endl; });

    auto pDivide = [](double a, double b) -> double {
        if (a == 0.0)
        {
            return 0;
        }

        return a / b;
    };

    cout << pDivide(10.0, 3.4) << endl;

    cout << pDivide(1.0, 2.4) << endl;

	cout << pDivide(0.0, 3.4) << endl;

	cout << "====== functionCall =======" << endl;

	runDivide(pDivide);

    char blah;
    cin >> blah;
    return 0;
}
*/