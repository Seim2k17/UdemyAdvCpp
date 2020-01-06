#include <iostream>
#include <map>
#include <string>

using namespace std;

/*
int main()
{
    multimap<int, string> lookup;

    lookup.insert(make_pair(30, "Mike"));
    lookup.insert(make_pair(50, "Mike"));
    lookup.insert(make_pair(10, "Mike"));
    lookup.insert(make_pair(30, "Blaeh"));
    lookup.insert(make_pair(50, "Rusty"));
    lookup.insert(make_pair(10, "John"));
	lookup.insert(make_pair(50, "Petra"));
	lookup.insert(make_pair(50, "Sam"));


    for (auto paar : lookup)
    {
        cout << paar.first << ": " << paar.second << endl;
    }

    cout << endl;

    for (multimap<int, string>::iterator it = lookup.begin(); it != lookup.end(); it++)
    {
        // dirtystyle
        if (it->first == 30)
        {
            cout << it->first << ": " << it->second << endl;
        }
    }

	cout << endl;

    // using a pair of iterators to get the range for a given key
    pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its =
        lookup.equal_range(30);

    // or simply use the C++11 auto keyword for this long shit
    auto its2 = lookup.equal_range(50);

    for (multimap<int, string>::iterator it = its2.first; it != its2.second; it++)
    {
        cout << it->first << ": " << it->second << endl;
    }

    char bla;
    cin >> bla;

    return 0;
}
*/
