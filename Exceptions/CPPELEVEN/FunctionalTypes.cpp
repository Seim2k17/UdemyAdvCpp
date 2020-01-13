#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

using namespace std;

class Test
{
public:
    bool operator()(string& value)
    {
        return value.size() == 4;
    }
} check1;

// standard function which accepts a string and returns a bool
bool check(string& value)
{
    return value.size() > 3;
}

//
void run(function<bool(string&)> check)
{
    string test = "dog";
    cout << check(test) << endl;
}

int multiplier(const int& a, const int& b)
{
    return a * b;
}

int main()
{
    vector<string> vec{"one", "two", "three", "five", "seven"};

    // passing lambda directly to count_if
    auto lambda = [](string text) { return text.size() == 3; };
    int count = count_if(vec.begin(), vec.end(), lambda);
    cout << count << endl;

    // passing a function pointer
    count = count_if(vec.begin(), vec.end(), check);
    cout << count << endl;

    // passing a functor
    count = count_if(vec.begin(), vec.end(), check1);
    cout << count << endl;

    cout << "========= OWN STD FUNCTION =====" << endl;
    // passing a lambda
    run(lambda);

    // passing a function pointer
    run(check);

    // passing a functor
    run(check1);

    // also we can assign some variables
    function<int(int, int)> add = [](int a, int b) { return a + b; };
    cout << "custom variable: " << add(3, 4) << endl;

    // functorTest
    class multi
    {
    public:
        bool operator()(int a, int b)
        {
            return a > b;
        }
    } M1;

    cout << "===== Functortest======" << endl;
    function<bool(int, int)> greater = M1;
    cout << greater(8, 9) << endl;
    cout << greater(82, 9) << endl;

    cout << "===== FunctorPointerTest======" << endl;
    function<int(int, int)> mul = multiplier;
    cout << mul(4, 5) << endl;
    cout << mul(43, 15) << endl;

    cout << "===== Mutable Lambdas ======" << endl;
    int cats = 8;
    cout << "we have: " << cats << " cats" << endl;

    auto lambda2 = [cats]() mutable {
        cats = 16;
        cout << "uhh we have " << cats << " cats now" << endl;
    };

    lambda2();

    cout << "we have still: " << cats << " cats" << endl;

    char bla;
    cin >> bla;
    return 0;
}
