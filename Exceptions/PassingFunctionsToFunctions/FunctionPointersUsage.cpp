#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool match(string test)
{
    return test.size() == 3;
}

int countStrings(vector<string>& texts, bool (*testMatch)(string toTest))
{
	return count_if(texts.begin(), texts.end(), testMatch);
}

/*
int main()
{
    vector<string> texts;
    texts.push_back("one");
    texts.push_back("two");
    texts.push_back("three");
    texts.push_back("four");
    texts.push_back("five");
    texts.push_back("one");
    texts.push_back("four");
    texts.push_back("three");
    texts.push_back("five");
    texts.push_back("one");

    cout << match("oene") << endl;

    cout << count_if(texts.begin(), texts.end(), match) << endl;
	cout << "Own Function" << endl;
	cout << countStrings(texts,match) << endl;

    char bla;
    cin >> bla;
    return 0;
}
*/