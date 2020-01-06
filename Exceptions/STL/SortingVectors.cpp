#include <iostream>
#include <string>
#include <vector>
// to use sorting etc.
#include <algorithm>

using namespace std;

class Test
{
private:
    string name;
    int id;

public:
    Test()
        : name("")
        , id(0)
    {
    }

    Test(string _name, int _id)
        : name(_name)
        , id(_id)
    {
    }

	friend bool comp(const Test &a, const Test &b);

	
	string GetName() const
	{
		return name;
	}

    void print()
    {
        cout << name << ": " << id << endl;
    }

	
    //bool operator<(const Test& other) const
    //{
    //    if (name == other.name)
    //    {
    //        return id < other.id;
    //    }
    //    else
    //    {
    //        return name < other.name;
    //    }
    //}
};

bool comp(const Test &a, const Test &b)
{
	// to avoid writing getters we can add the prototype of the function as a friend to the class
	return a.name < b.name;

	// with getters of course ...
	// return a.GetName() < b.GetName();
}

/*
int main()
{
    vector<Test> TestVector;
    TestVector.push_back(Test("Ben", 15));
    TestVector.push_back(Test("Triss", 15));
    TestVector.push_back(Test("Gerald", 75));
    TestVector.push_back(Test("Muppet", 25));
    TestVector.push_back(Test("Ben", 5));
    TestVector.push_back(Test("Elvira", 15));
    TestVector.push_back(Test("Xena", 75));
    TestVector.push_back(Test("Aaron", 25));
	TestVector.push_back(Test("Gerald", 5));

    // from the std::namespace; but need tom impülement <algorithm>
    // sort the whole vector
	// sort(TestVector.begin(), TestVector.end(),comp);
	
	// sort only a range
	sort(TestVector.begin()+3, TestVector.end()-3,comp);

    for (auto el : TestVector)
    {
        el.print();
    }

    char bla;
    cin >> bla;
    return 0;
}
*/