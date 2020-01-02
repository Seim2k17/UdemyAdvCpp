
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> strings;
    strings.push_back("bla");
    strings.push_back("cat");
    strings.push_back("poo");
    strings.push_back("maeh");

    // not recommend!!! use push_back for adding (otherwise an exception can be thrown
    //strings[3] = "dog";

    // iterate through a vector
    // 1. common way
    /*
	for (int i = 0; i < strings.size();i++)
	{
		cout << strings[i] << endl;
	}
	*/

    // 2. use a iterator

    for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++)
    {
        cout << "SizeOfStrings: " << strings.size() << " : " << *it << endl;
    }

    char bla;
    cin >> bla;

    return 0;
}
