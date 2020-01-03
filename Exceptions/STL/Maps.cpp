#include <iostream>
#include <map>
#include <string>

using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person()
        : name("")
        , age(0)
    {
    }
    Person(string _name, int _age)
        : name(_name)
        , age(_age)
    {
    }

    void print() const
    {
        cout << name << ": " << age << endl;
    }

    // overloading of the operator for sorting and const because it shouldn't change objects
    bool operator<(const Person& other) const
    {
        return name < other.name;
    }
};

/*
int main()
{
    map<string, int> ages;

    ages["Mike"] = 40;
    ages["Baest"] = 10;
    ages["Elvira"] = 240;
    ages["Ben"] = 22;

    ages.insert(make_pair("Hoschi", 666));

    if (ages.find("bla") != ages.end())
    {
        cout << "bla is 22" << endl;
    }

    // 1. iterate with an iterator
    // sorted map !
    for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++)
    {
        cout << it->first << ": " << it->second << endl;
    }

    // 2. range based loops
    for (auto keyVal : ages)
    {
        cout << "Key: " << keyVal.first << " Val: " << keyVal.second << endl;
    }

	cout << " Custom-Typed Values: " << endl << endl;

    // maps with custom-typed value

    map<int, Person> personas;

    personas[0] = Person("Dude1", 20);
    personas[1] = Person("Rebecca", 45);
    personas[2] = Person("Dardan", 23);
    personas[3] = Person("may", 45);

    for (auto persons : personas)
    {
        cout << persons.first << ":" << endl;
        persons.second.print();
    }

    // maps with custom-typed keys

    map<Person, int> Leude;
	Leude[Person("Duddette", 22)] = 22;
	Leude[Person("Xeron", 11)] = 11;
    Leude[Person("Miss", 45)] = 45;
    Leude[Person("Mister", 23)] = 23;
    Leude[Person("Dude23", 47)] = 47;
	

	cout << " Custom-Typed Keys: " << endl << endl;

    for (auto leuds : Leude)
    {
        leuds.first.print();
        cout << leuds.second << " Jahre " << endl << endl;
    }

    char bla;
    cin >> bla;

    return 0;
}
*/