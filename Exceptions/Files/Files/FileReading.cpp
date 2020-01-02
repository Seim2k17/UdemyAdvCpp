#include <fstream>
#include <iostream>
#include <string>

using namespace std;

/*
int main()
{
    // input filestream
    string fileName = "text.txt";
    ifstream inFile;
    // fstream inFile;

    inFile.open(fileName);
    //inFile.open(fileName, ios::in);

    if (inFile.is_open())
    {
        string line;

        // while (!inFile.eof()) == (there is an overload Operator so we also can do: ...
		while (inFile)
        {
            getline(inFile, line);
            cout << line << endl;
        }
        // read only first line
        // inFile >> line;

        char bla;
        cin >> bla;

        //inFile.read();

        inFile.close();
    }
    else
    {
        cout << "Can´t open file; " << fileName << endl;
    }

    return 0;
}
*/