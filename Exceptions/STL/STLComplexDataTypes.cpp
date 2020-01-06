#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Person
{
private:
};

bool comp(const string &a, const string &b)  {
	return a < b;
}

/**/
int main()
{

	map<string, vector<int> > scores;

	scores["mike"].push_back(10);
	scores["mike"].push_back(18);
	scores["mike"].push_back(30);
	scores["Vicky"].push_back(10);
	scores["Ben"].push_back(120);
	scores["Vicky"].push_back(100);

	
	//sort(scores.begin(), scores.end(), comp);


	for (auto person : scores)
	{
		auto PersonScore = person.second;
		string name = person.first;

		cout << name << ":" << flush;

		for (auto score : PersonScore)
		{
			cout << score << " " << flush;
		}

		cout << endl;
	}

	char blah;
	cin >> blah;
	return 0;
}

