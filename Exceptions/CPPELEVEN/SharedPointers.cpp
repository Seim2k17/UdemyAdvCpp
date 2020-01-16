#include <iostream>

using namespace std;

class Test101 {
public:
	Test101() {
		cout << "Test101 is created." << endl;
	}

	void greet()
	{
		cout << "Hello." << endl;
	}

	~Test101()
	{
		cout << "Test101 is destroyed." << endl;
	}
};


int main()
{

	{

		shared_ptr<Test101> pST2(nullptr);

		{
			//shared_ptr<Test101> pST(new Test101());
			shared_ptr<Test101> pST1 = make_shared<Test101>();
			pST2 = pST1;
		}
		

		 //shared_ptr<Test101> pST3 = pST1;

		cout << "Execution finished." << endl;
		char bla1;
		cin >> bla1;
		
	}
	// here the memory is deallocated

	cout << "Program finished." << endl;

	char bla;
	cin >> bla;
	return 0;
}