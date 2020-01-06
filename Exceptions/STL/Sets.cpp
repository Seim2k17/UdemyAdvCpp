#include <iostream>
#include <set>
#include <string>

using namespace std;

class Infos

{
public:
    Infos()
        : Number(0)
        , Name("")
        , Symbol(' ')
    {
    }

    Infos(int _number, string _name, char _symbol)
        : Number(_number)
        , Name(_name)
        , Symbol(_symbol)
    {
    }

    int Number;
    string Name;
    char Symbol;

    // overloading of the operator for sorting and const because it shouldn't change objects
    bool operator<(const Infos& other) const
    {
        return Name < other.Name;
    }
};

/*
int main()
{
    set<int> Numbers;

    Numbers.insert(2);
    Numbers.insert(45);
    Numbers.insert(21);
    Numbers.insert(12);
    Numbers.insert(0);
    Numbers.insert(17);

    Numbers.insert(17);
    Numbers.insert(21);
    Numbers.insert(2);

    for (auto el : Numbers)
    {
        cout << el << endl;
    }

    // Iterator way of finding elements in a set
    set<int>::iterator it = Numbers.find(100);

    if (it != Numbers.end())
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "Element is not in set." << endl;
    }

    cout << endl;
    cout << "Simpler way of finding elements. ";

    //simpler way finding elements

    int ele = 1;

    if (Numbers.count(ele))
    {
        cout << "Element " << ele << " found." << endl;
    }
    else
    {
        cout << "Element " << ele << " is not on set." << endl;
    }

    cout << " Set with custom Data Type" << endl;
    cout << endl;

    Infos info1 = Infos(10, "Dude", 'c');
    Infos info2 = Infos(120, "Dude", 'c');
    Infos info3 = Infos(1, "Typ", 'd');

    set<Infos> MetaStuff;
    MetaStuff.insert(info1);
    MetaStuff.insert(info2);
    MetaStuff.insert(info2);
    MetaStuff.insert(info3);

    MetaStuff.insert(info1);

    for (auto el1 : MetaStuff)
    {
        cout << el1.Name << " : " << el1.Number << " : " << el1.Symbol << endl;
        cout << endl;
    }

    char bla;
    cin >> bla;

    return 0;
}
*/
