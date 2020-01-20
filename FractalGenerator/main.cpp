#include <iostream>
#include "Bitmap.h"

using namespace std;
using namespace fractalCreator;

int main()
{
	cout << "started writing" << endl;
	Bitmap bmp(500,500);
	bmp.write("image3.bmp");
	
	
	cout << "finished" << endl;
	return 0;
}
