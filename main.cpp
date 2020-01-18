

#include "Bitmap.h"
#include <iostream>

using namespace std;

int main()
{
    fractalCreator::Bitmap bmp(1024, 768);
    bmp.write("test2.bmp");

    cout << "Finished" << endl;
    char bla;
    cin >> bla;
    return 0;
}



/*
#include <stdio.h>

int main(int argc, char **argv)
{
	printf("hello world\n");
	return 0;
}
*/