#include <iostream>
#include <vector>
#include <string>
#include <initializer_list>

using namespace std;


class TestInitList
{
public:
	vector<string> bTexts;
	TestInitList(initializer_list<string> texts) {

	}

	void print(initializer_list<string> iList) {
		for (auto el : iList)
		{
			cout << el << endl;
		}
	}
};

/*
int main()
{

	TestInitList test1{"one","two","three"};
	test1.print({ "ten","twenty","zero" });

	char blah;
	cin >> blah;
	return 0;
}
*/