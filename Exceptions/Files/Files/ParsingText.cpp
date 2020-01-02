#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
int main()
{

	string fileName = "Stats.txt";
	ifstream input;

	input.open(fileName);

	if (!input.is_open())
	{
		// return "errorcode 1"
		return 1;
	}

	while (input)
	{
		string line;

		// we use a delimiter here (:)
		getline(input, line, ':');

		int population;
		input >> population;

		// discard the invisible NewLine Char which we otherwise print out
		//before C++11
		
		//input.get();
		
		
		// since c++11

		input >> ws;

		
		
		if (!input)
		{
			break;
		}
		

		cout << "'" << line << "'" << " -- " << "'" << population << "'" << endl;

		
	}

	input.close();

	char bla;
	cin >> bla;

	return 0;
}

*/