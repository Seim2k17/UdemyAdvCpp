#include <iostream>
#include <string>
using namespace std;

struct Test
{
    virtual bool operator()(string& text) = 0;

    virtual ~Test(){};
};

struct MatchTest : public Test
{
    bool operator()(string& text)
    {
        cout << "MatchTest-FunctorCall " << endl;
        return text == "Yes";
    }
};

struct LengthTest : public Test
{
    bool operator()(string& text)
    {
        cout << "LengthTest-FunctorCall " << endl;
        return (text.size() == 4);
    }
};

void check(string text, Test& test)
{
    if (test(text))
    {
        cout << "Match " << endl;
    }
    else
    {
        cout << "No Match " << endl;
    }
}

int main()
{
    string toCheck = "Yes!";
    MatchTest Match;
    LengthTest Laeng;

    check(toCheck, Laeng);
	check(toCheck, Match);

    char bla;
    cin >> bla;

    return 0;
}
