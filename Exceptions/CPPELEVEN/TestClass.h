#pragma once
#include <iostream>
#include <typeinfo>

using namespace std;

template <class T>
class TestClass
{
public:
	TestClass();
	~TestClass();

	class iterator;
};

template <class T>
class TestClass<T>::iterator
{
public:
	void print()
	{
		cout << "Shaped my C++ knowledge a bit more: " << typeid(T).name() << endl;
	}
};


