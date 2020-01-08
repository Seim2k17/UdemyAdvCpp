#include <iostream>
#include <typeinfo>
#include <vector>
using namespace std;

template<class T, class U>
// C++11 syntax
// auto test(T value1, U value2) -> decltype(value)

// since C++14
auto test(T value1, U value2)
{
    cout << "Call Test (" << typeid(value1).name() << "," << typeid(value2).name() << ")" << endl;

	return value1 + value2;

    if (value1 > value2)
    {
        return value1 + value2;
    }
    else
    {
        //string test = "Hmm. Damnit Dude.";
        return value1 - value2;
    }
}

/*
int main()
{
    auto value = 7;
    cout << "TypeID.name: " << typeid(value).name() << endl;

    vector<float> vecInt;
    vecInt.push_back(27.5f);
    vecInt.push_back(73.0f);

    cout << "TypeID.name: " << typeid(vecInt).name() << endl;
    //cout << "declType: " << detypeid(value).name() << endl;

    cout << "RangeBasedLoop: " << endl;

    for (auto el : vecInt)
    {
        cout << "TypeID.name: " << typeid(el).name() << endl;
    }

    cout << "RangeBasedLoop: " << endl;

    for (auto it = vecInt.begin(); it != vecInt.end(); it++)
    {
        cout << "TypeID.name: " << typeid(it).name() << endl;
    }

    cout << test(1, 4) << endl;
    cout << test(1, 4.5f) << endl;
    cout << test(301, 3.5) << endl;
    // cout << test("heyho"," maeh") << endl;

    char bla;
    cin >> bla;
    return 0;
}
*/