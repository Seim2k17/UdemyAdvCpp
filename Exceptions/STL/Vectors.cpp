
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
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
    
	for (int i = 0; i < strings.size();i++)
	{
		cout << strings[i] << endl;
	}
	

    // 2. use a iterator

    for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++)
    {
        cout << "SizeOfStrings: " << strings.size() << " : " << *it << endl;
    }

    char bla;
    cin >> bla;

    vector<int> numbers;
    int count;
    cout << "How Many? " << endl;
    cin >> count;

	int counter = count;

    while (counter > 0)
    {
        int number;
        cin >> number;
        numbers.push_back(number);
        counter--;
    }

	cout << "There are " << count << " Elements in the Vector: " << endl;
    int i = 0;
    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
    {
        cout << ++i << ": " << *it << endl;
		
    }

	// 3. ranged based loops, since c++11
	cout << "Ranged-Based-loop: " << endl;
	
	for (auto c : numbers)
	{
		cout << c << endl;
	}

    cin >> count;

    return 0;
}
*/