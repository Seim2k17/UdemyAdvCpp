#include "Bitmap.h"
#include <iostream>

using namespace std;


int main()
{
    fractalCreator::Bitmap bmp(800, 600);
    bmp.write("test.bmp");

    cout << "Finished" << endl;
    char bla;
    cin >> bla;
    return 0;
}
