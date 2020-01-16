#include <iostream>
#include <memory>

using namespace std;

class Test100
{
public:
    Test100()
    {
        cout << "Test1k created. " << endl;
    }

    void greet()
    {
        cout << "Hello!" << endl;
    }

    ~Test100()
    {
        cout << "Test1k destroyed.  " << typeid(this).name() << endl;
    }
};

class Temp
{
private:
    unique_ptr<Test100[]> pTemp;

public:
    Temp()
        : pTemp(new Test100[3])
    {
    }
};

/*
int main()
{
    {
        unique_ptr<int> pTest(new int);

        *pTest = 7;

        cout << *pTest << endl;

        {
            unique_ptr<Test100> pTest1k(new Test100());
            pTest1k->greet();
        }
        cout << "finished execution1k" << endl;

        Test100* pTest0k = new Test100();
        pTest0k->greet();
        cout << "finished execution0k" << endl;

        cout << "========ARRAY=========" << endl;

        unique_ptr<Test100[]> pUAr(new Test100[5]);
        pUAr[0].greet();
    }

	cout << "========TEMP-SMART PTR=========" << endl;

	unique_ptr<Temp> pTemp(new Temp());

    cout << "finished programm" << endl;

    char bla;
    cin >> bla;
    return 0;
}
*/
