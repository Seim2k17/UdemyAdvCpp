#include <fstream>
#include <iostream>
#include <string>
using namespace std;

// disable packing; in one byte-steps
#pragma pack(push, 1)

struct Person
{
public:
    // this will be a problem when moving the program to another machine (test it at home ! ); when moving the struct to a binary file
    // string name;
    // instead we use a Char-Array
    // but c++ padds the struct for efficiency
    char name[50];
    // char bla;
    double weight;
    double height;
    //char blub;
};

// enable packing / padding
#pragma pack(pop)

int main()
{
    // cout << sizeof(Person) << endl;
    
	
	string fileName = "test.bin";
    
	
	
	ofstream outputFile;
    Person someOne = {"Muddisssd", 220, 0.8};

    // Write binary file

    outputFile.open(fileName, ios::binary);

    if (outputFile.is_open())
    {
        // we need to write the reference / write needs a char pointer so we need to cast
        // "better new" way since c++11 :
        outputFile.write(reinterpret_cast<char*>(&someOne), sizeof(Person));
        // "old way" to cast
        //outputFile.write((char *)&someOne, sizeof(Person));

        // for every open file we need a close
        outputFile.close();
    }
    else
    {
        cout << "Could not create file " << fileName << endl;
    }
	
	
    // Read binary file

    ifstream inputFile;
    Person inPerson;

    inputFile.open(fileName, ios::binary);

    if (inputFile.is_open())
    {
        inputFile.read(reinterpret_cast<char*>(&inPerson), sizeof(Person));

		cout << "Name:" << inPerson.name << endl;
		cout << "Weight:" << inPerson.weight << endl;
		cout << "Height:" << inPerson.height << endl;

        inputFile.close();
    }
    else
    {
        cout << "Could not open file " << fileName << endl;
    }

    // just to hold the Terminal open
    char bla;
    cin >> bla;

    return 0;
}
