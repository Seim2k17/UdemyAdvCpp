#include <exception>
#include <iostream>
using namespace std;

class CustException : public exception
{
public:
    virtual const char* what() const throw() override
    {
        return "Something bad happened.";
    }
};

class Test
{
public:
    void goesWrong()
    {
        throw CustException();
    }
};

/*
int main()
{
    Test test;
    try
    {
        test.goesWrong();
    }
    catch (CustException& e)
    {
        std::cout << e.what() << std::endl;
    }

    int bla;
    std::cin >> bla;
    return 0;
}
*/
