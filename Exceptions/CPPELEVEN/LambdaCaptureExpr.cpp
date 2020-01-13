#include <iostream>

using namespace std;

class Test
{
private:
    int four{4};
    int five{5};

public:
    void run()
    {
        int six{6};
        int seven{7};

        auto pLambda = [this, six, seven]() {
            cout << six << "," << seven << endl;
            cout << four << "," << five << endl;
            four = 400;
            five = 52;
            cout << four << "," << five << endl;
        };

        pLambda();
    }
};

/*
int main()
{
    int one = 1;
    int two = 2;
    int three = 3;

    // passing in expl. variables by value
    [one, two]() { cout << "Hello: " << (one + two) << endl; }();

    // capturing all local variables by value
    [=]() { cout << "Hello: " << (one + two + three) << endl; }();

    // capturing all local variables by value exc. three (by reference)
    [=, &three]() { cout << "Hello: " << (one + two + three) << endl; }();

    // capturing all local variables by reference (and can therefore be changed inside lambda
    [&]() { cout << "Hello: " << (one + two + three) << endl; }();

    [&, two]() {
        one = 3;
        cout << "Hi again: " << one << endl;
    }();

    cout << "========= CAPTURING THIS ===========" << endl;

    Test test1;
    test1.run();

    char blah;
    cin >> blah;
    return 0;
}
*/