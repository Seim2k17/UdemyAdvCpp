#include "Complex.h"
#include <iostream>
#include <string>
using namespace std;

template<class T>
class Test
{
private:
    T obj;

public:
    Test(T _obj)
    {
        this->obj = _obj;
    }

    void print()
    {
        cout << obj << endl;
    }
};


/*

int main()
{
    Test<string> test1("Hello");
    test1.print();

    Test<int> test2(34);
    test2.print();

    Complex c1(3, 2);
    
	
	Test<Complex> c(c1);
    c.print();

    char bla;
    cin >> bla;
    return 0;
}
*/