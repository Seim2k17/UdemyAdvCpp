#include <iostream>
#include "Bitmap.h"

using namespace std;
using namespace fractalCreator;

int main(int argc, char **argv)
{
	
	Bitmap bmp(500,500);
	bmp.write("image.bmp");
	
	
	cout << "finished" << endl;
	return 0;
}
