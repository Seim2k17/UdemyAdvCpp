#include <iostream>
#include "Ring.h"
#include <string>

using namespace std;

/*
int main()
{



	ring<string> ringBuf(10);

	ring<int> ringBuf2(9);

	//	this needs a default constructor!"
	// but m_ring is a reference and a reference must be bound to another variable when it´s initialized
	// it can´t be default initialized - the reference has to be bound to some other variable, but we don´t suplly a variable

	ring<string>::iterator it ; //= ringBuf.begin();
	it.print();


	ringBuf2.add(2);
	ringBuf2.add(3);
	ringBuf2.add(4);
	ringBuf2.add(5);
	ringBuf2.add(6);
	ringBuf2.add(7);
	

	ringBuf.add("one");
	ringBuf.add("two");
	ringBuf.add("three");
	ringBuf.add("four");
	ringBuf.add("five");
	ringBuf.add("six");
	ringBuf.add("seven");

	for (int i = 0; i <= ringBuf.size(); i++)
	{
		cout << i << ": " << ringBuf.get(i) << endl;
	}

	cout << endl;


	// without making the class iteratable we need this for going through the elements
	// 	
	// 	for (int j = 0; j <= ringBuf2.size(); j++)
	// 	{
	// 		cout << j << ": " << ringBuf2.get(j) << endl;
	// 	}

	// we want this; and the compiler helps us a bit by complaining what is needed (start with begin() and end() function, then operators overloading)
	// furthermore to get this nice range based loop we need to implement  the iterator loops
	// for(ring<string>::iterator it = ringBuf.begin(); it!=ringBuf.end(); it++) { cout << *it << endl};


	// c++98
	for (ring<string>::iterator it = ringBuf.begin(); it != ringBuf.end(); it++)
	{
		cout << *it << endl;
	}

	// c++11
	for (string el : ringBuf)
	{
		cout << el << endl;
	}



	char bla;
	cin >> bla;

	return 0;
}

*/