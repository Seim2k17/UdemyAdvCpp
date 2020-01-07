#pragma once
#include <iostream>

using namespace std;

class Complex
{
private:
	double real;
	double imaginary;

public:
	Complex();
	Complex(double r, double i);

	Complex(const Complex& other);

	~Complex();

	const Complex& operator=(const Complex& other);
	//refering OverloadComparisonOps.cpp
	bool operator==(const Complex& other) const;
	bool operator!=(const Complex& other) const;

	// we ant to use * for a complex conjugate (flipping the sign of the imaginary part
	Complex operator*() const;

	// see explanation below
	double getReal() const
	{
		return real;
	}
	double getImaginary() const
	{
		return imaginary;
	}
};

// refering Complexnumbers.cpp
// if we mark a parameter as const the methods which are called from this object needs to be also marked as const (so they can´t change members!)
ostream& operator<<(ostream& out, const Complex& complexNumber);

//refering OverloadPlus.cpp
Complex operator+(const Complex& a, const Complex& b);
Complex operator+(const Complex& a, const double d);
Complex operator+(const double d, const Complex& a);

/* or
//refering OverloadComparisonOps.cpp
bool operator==(const Complex& a, const Complex& b);
bool operator!=(const Complex& a, const Complex& b);
*/
