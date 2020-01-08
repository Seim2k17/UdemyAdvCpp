#include <iostream>
#include <string>
#include "RingBuffer.h"

using namespace std;

int main()
{
	// practice: we want st like:

	RingBuffer<string> textring(3);

	textring.add("one");
	textring.add("two");
	textring.add("three");
	textring.add("four");

	for (int i = 0; i < textring.getSize(); i++)
	{
		cout << textring.get(i) << endl;
	}


	/*
	* Output should be
	* four
	* one (or two)
	* two (or three) 
	*/
	char bla;
	cin >> bla;
	return 0;
}
