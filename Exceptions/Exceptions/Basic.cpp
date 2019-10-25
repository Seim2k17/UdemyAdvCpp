#include <iostream>
using namespace std;

void mightGoWrong()
{
    bool error0 = false;
    bool error1 = true;
    bool error2 = true;

    if (error0)
    {
        throw 8;
    }

    if (error1)
    {
        throw "SomeThing went wrong.";
    }

//     if (error2)
//     {
//         throw string("SomeThing else went wrong.");
//     }
}

void usesMightGoWrong()
{
    mightGoWrong();
}

/*
int main()
{
    int N = 20;
    int input;

    // mightGoWrong();
    try
    {
        usesMightGoWrong();
        //mightGoWrong();
    }
    catch (int e)
    {
        cout << "Error code0:" << e << endl;
    }
    catch (char const* e)
    {
        cout << "ErrorMessage1: " << e << endl;
    }

    //  don´t do:
    // 	catch (string e)
    // 	{
    // 		cout << "ErrorMessage2: " << e << endl;
    // 	}

    cout << "Still Running:" << endl;
    cin >> input;

    return 0;
}
*/
