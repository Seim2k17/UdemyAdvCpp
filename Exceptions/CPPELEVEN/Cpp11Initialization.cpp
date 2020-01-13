#include <iostream>
#include <string>
#include <vector>

using namespace std;

void manipulate(double* pValue)
{
	cout << "2. Value of int manipulate. " << *pValue << endl;
	*pValue = 10.0;
	cout << "3. Value of int manipulate. " << *pValue << endl;
}

void manipulateRef(double& rValue)
{
	cout << "Adress rVal(manipulateRef): " << rValue << endl;
}

/*
int main()
{

	// int
	int value{5};
	int* pValue = &value;
	cout << value << " Adress: " << pValue << " DeRef: " << *pValue << endl;
	
	cout << "=========================" << endl;
	
	double dValue = 123.212;
	cout << "1.Value:" << dValue << endl;
	manipulate(&dValue);
	cout << "4.Value after manipulate:" << dValue << endl;
	cout << endl;
	cout << "5.rValue ManRef:" << endl;
	manipulateRef(dValue);
	
	cout << "6. sizes: rValue :" << sizeof(dValue) << endl;
	cout << "6. sizes: pValue :" << sizeof(pValue) << endl;
	cout << "=========================" << endl;

	int* pSomething{ &value };
	cout << pSomething << " : " << *pSomething << endl;

	int* pSomething2{nullptr}; // equvalent to int* pSomething = nullptr;
	cout << pSomething2 << " : " << endl;// << *pSomething2 << endl; // the programm crashes because of nullptr access

	// arrays
	int values[]{2,5,3};
	cout << values[2] << " " << values[0] << " " << values[1] << endl;

	string text{ "bla" };
	cout << text << endl; 

	vector<string> texts{"one","two","three"};
	cout << "Vector: " << texts[1] << endl;


	char bla;
	cin >> bla;

	return 0;
}
*/