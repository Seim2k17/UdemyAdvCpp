#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    virtual void speak() = 0;
    virtual void run() = 0;
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Woof Woof" << endl;
    }
};

class Labrador : public Dog
{
public:

	string spruch;

    Labrador():spruch("LABRRR")
    {
        cout << "Labrador Ctor" << endl;
    }

	void speak()
	{
		cout << "Woof " << endl;
		cout << spruch ;
		cout << endl;
	}

    void run()
    {
        cout << "Labrador is running" << endl;
    }
};


/*
int main()
{
    // 	Dog dog;
    // 	dog.speak();

    Labrador Labr;
    Labr.run();
    Labr.speak();
	Labr.spruch = "AOOOOOWWW";

    Labrador labs[5];
	cout << endl;
	cout << "Array of pointers" << endl << endl;

	Animal* animals[4];
	animals[0] = &Labr;
	animals[1] = new Labrador();

	animals[0]->run();
	animals[0]->speak();
	animals[1]->speak();


    char bla;
    cin >> bla;

    return 0;
}
*/