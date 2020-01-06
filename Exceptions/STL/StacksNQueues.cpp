#include <iostream>
#include <queue>
#include <stack>
#include <string>

using namespace std;

class Test
{
private:
    string Name;

public:
    Test()
        : Name("")
    {
    }

    Test(string _name)
        : Name(_name)
    {
    }

    ~Test()
    {
        // cout << "Object " << Name << " is destroyed. " << endl;
    }

    void print()
    {
        cout << Name << endl;
    }
};

/*
int main()
{
    stack<Test> TestStack;

    TestStack.push(Test("Mike"));
    TestStack.push(Test("Mike2"));

    Test& test1 = TestStack.top();
    cout << "Top Element: " << endl;
    test1.print();

    TestStack.push(Test("Ron"));
    TestStack.push(Test("Sue"));

    cout << "Top Element now: " << endl;
    test1.print();

    // kind of iteratoring thorugh a stack with popping the elements POW POW
    while (TestStack.size() > 0)
    {
        Test& TestObject = TestStack.top();
        TestObject.print();
        TestStack.pop();
    }

    cout << endl;
    cout << endl;
    cout << "QUEUE-Stuff" << endl;

    queue<Test> TestQueue;
    TestQueue.push(Test("Mike"));
    TestQueue.push(Test("Peter"));
    TestQueue.push(Test("Ronny"));
    TestQueue.push(Test("Silke"));

    while (TestQueue.size() > 0)
    {
        Test& TestObject = TestQueue.front();
        TestObject.print();
        TestQueue.pop();
    }

    char bla;
    cin >> bla;
    return 0;
}
*/