#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
    string title;
    string author;
    int pages;
    float price;

public:
    Book()
        : title("")
    , author("")
    , pages(0)
    , price(0.0f)
    {
    }

    Book(string _title, string _author, int _pages, float _price)
        : title(_title)
        , author(_author)
        , pages(_pages)
        , price(_price)
    {
    }

	~Book()
	{
		cout << "Calling C'tor. " << endl;
	}


	Book& operator=(const Book& other)
	{
		cout << " Overloaded = Op. called." << endl;
		title = other.title + " vorher: " + title;
		price = other.price;
		pages = other.pages;
		author = other.author;
		return *this;
	}

	friend ostream& operator<<(ostream& out, const Book& buch)
	{
		out << buch.title << ": " << buch.author << ", " << buch.pages << " pages, cost " << buch.price << "$";
		return out;
	}

	Book(Book& other)
	{
		cout << "Copy-C'tor called " << endl;
		title = other.title;
		price = other.price;
		pages = other.pages;
		author = other.author;
	}
};

/*
int main()
{
    Book buch1("100Jahre Einsamkeit", "Gabriel Garcia Marquez", 323, 10.99f);
	Book buch2("Berserk", "Kentaro Miura", 400, 10.00f);

    cout << buch1 << "; " << endl << buch2 << "; " << endl;
	
	buch1 = buch2;

	cout << endl;
	cout << buch1;
	cout << endl;

	Book buch3 = buch1;
	cout << buch3;

	char blah;
    cin >> blah;

	

    return 0;
}
*/