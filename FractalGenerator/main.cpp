#include "Bitmap.h"
#include <iostream>

using namespace std;
using namespace fractalCreator;

int main()
{
    int const WIDTH = 1024;
    int const HEIGTH = 768;

    cout << "started writing" << endl;
    Bitmap bmp(WIDTH, HEIGTH);

    double min = 999999;
    double max = -999999;

    // 1rst Test set everything red Pixel)
    for (int _w = 0; _w < WIDTH; _w++)
    {
        for (int _h = 0; _h < HEIGTH; _h++)
        {
            // 1. Test
            // bmp.setPixel(_w, _h, 255, 0, 0);
			// these Values should range from [-1,1] / weight over Screencoordinates --> 0 is WIDTH/2pcx / -1 = -WIDTH pcx / 1 = WIDTH pcx
			// HAE ???
			// 2.0 because we want to supply a float not
            double xFractal = (_w - WIDTH/2) * (2.0 / WIDTH); // from -1 to +1 it´s 2 ...
            double yFractal = (_h - HEIGTH/2) * (2.0 / HEIGTH);

			// to get a range from [-1,+1]

			if (yFractal < min)
				min = yFractal;
			if (yFractal > max)
				max = yFractal;

//             if (xFractal < min)
//                 min = xFractal;
//             if (xFractal > max)
//                 max = xFractal;
        }
    }

    cout << min << ", " << max << endl;

    bmp.write("image3.bmp");

    cout << "finished" << endl;
    return 0;
}
