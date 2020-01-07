#include "Complex.h"
#include <iostream>
using namespace std;

ostream& operator<<(ostream& out, const Complex& complexNumber)
{
    out << "r: " << complexNumber.getReal() << " i: " << complexNumber.getImaginary();
    return out;
}

Complex operator+(const Complex& a, const Complex& b)
{
    cout << "Addition-Complex" << endl;
    return Complex(a.getReal() + b.getReal(), a.getImaginary() + b.getImaginary());
}

Complex operator+(const Complex& a, const double d)
{
    cout << "Addition-Double-RHS" << endl;
    return Complex(a.getReal() + d, a.getImaginary());
}

Complex operator+(const double d, const Complex& a)
{
    cout << "Addition-Double-LHS" << endl;
    return Complex(a.getReal() + d, a.getImaginary());
}

/*
bool operator!=(const Complex& a, const Complex& b)
{
    return ((a.getReal()) != (b.getReal()) || (a.getImaginary()) != (b.getImaginary()));
}

bool operator==(const Complex& a, const Complex& b)
{
    return ((a.getReal()) == (b.getReal()) && (a.getImaginary()) == (b.getImaginary()));
}
*/

Complex::Complex()
    : real(0.0)
    , imaginary(0.0)
{
}

Complex::Complex(const Complex& other)
{
    cout << "C'tdor" << endl;
    real = other.real;
    imaginary = other.imaginary;
}

Complex::Complex(double r, double i)
    : real(r)
    , imaginary(i)
{
}

Complex::~Complex()
{
}

Complex Complex::operator*() const
{
	return Complex(real, -imaginary);
}

bool Complex::operator!=(const Complex& other) const
{
    // return ((a.getReal()) != (b.getReal()) || (a.getImaginary()) != (b.getImaginary()));
    return !(*this == other);
}

bool Complex::operator==(const Complex& other) const
{
    return ((real == other.getReal()) && (imaginary == other.getImaginary()));
}

const Complex& Complex::operator=(const Complex& other)
{
    cout << "Assignement Op-Call." << endl;
    imaginary = other.imaginary;
    real = other.real;
    return *this;
}
