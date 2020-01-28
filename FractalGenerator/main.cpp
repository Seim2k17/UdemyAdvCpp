#include "Bitmap.h"
#include "Mandelbrot.h"
#include <cstdint>
#include <iostream>
#include <math.h>
#include <memory>
#include "ZoomList.h"

using namespace std;
using namespace fractalCreator;

void printArray(const unique_ptr<int[]>& Array)
{
    int count = 0;
    for (int i = 0; i < Mandelbrot::MAX_ITERATIONS; i++)
    {
        cout << "A[" << i << "]: " << Array[i] << endl;
        count += Array[i];
    }

    cout << "Count Pixel: " << count << endl;
}

int main()
{
    // uff 4k =
    //int const WIDTH = 4 * 1920;
    //int const HEIGTH = 4 * 1080;

    int const WIDTH = 800;
    int const HEIGTH = 600;

    cout << "started writing" << endl;
    Bitmap bmp(WIDTH, HEIGTH);

    double min = 999999;
    double max = -999999;

    // store how many pixels need which iteration.
    // and be sure to initialize the array with 0 ( {} )
    //unique_ptr<int[]> histogram(new int[Mandelbrot::MAX_ITERATIONS + 1]{});
    // to get rid of the very last element of the histogram we simply create a array of MaxIteration
    unique_ptr<int[]> histogram(new int[Mandelbrot::MAX_ITERATIONS]{});

    // store the iterations for every pixel and access it later on (like a LUT !? )
    unique_ptr<int[]> fractal(new int[WIDTH * HEIGTH]{});

    // 1rst Test set everything red Pixel)
    for (int y = 0; y < HEIGTH; y++)
    {
        for (int x = 0; x < WIDTH; x++)
        {
            // 1. Test
            // bmp.setPixel(_w, _h, 255, 0, 0);
            // these Values should range from [-1,1] / weight over Screencoordinates --> 0 is WIDTH/2pcx / -1 = -WIDTH pcx / 1 = WIDTH pcx
            // HAE ???
            // make examples and try to spot a pattern :  [to get from [0..20] -> [-1..1] we do: 1: div by 10 [0..2] then -1 [-1..1] => (/(n/2)) -1 == (2(n) - 1)
            // 2.0 because we want to supply a float not a natural number we need to cast it to by giving 2.0 not 2
            //double xFractal = (x - WIDTH / 2 - 200) * (2.0 / WIDTH); // from -1 to +1 it´s 2 ...
            //double yFractal = (y - HEIGTH / 2) * (2.0 / HEIGTH);

            double xFractal = (x - WIDTH / 2 - 200) * (2.0 / HEIGTH);
            double yFractal = (y - HEIGTH / 2) * (2.0 / HEIGTH);

            // to get a range from [-1,+1]

            // now we encapsulate the drawing code and here we only build the histogram
            // here we get a number of iterations for every pixel
            int iterations = Mandelbrot::getIteration(xFractal, yFractal);

            // calculate the index of the pixel
            fractal[y * WIDTH + x] = iterations;

            // build a histogram of the number of iterations we can use and check that we never pass MAX_ITERATIONS
            if (iterations != Mandelbrot::MAX_ITERATIONS)
            {
                histogram[iterations]++;
            }
        }
    }

    //printArray(histogram);

    cout << "Calculated Pcx: " << WIDTH * HEIGTH << endl;

    cout << min << ", " << max << endl;

    // move drawing code to another loop / encapsulate

    int total = 0;

    for (int j = 0; j < Mandelbrot::MAX_ITERATIONS; j++)
    {
        total += histogram[j];
    }

    for (int y = 0; y < HEIGTH; y++)
    {
        for (int x = 0; x < WIDTH; x++)
        {
            uint8_t red = 0;
            uint8_t green = 0;
            uint8_t blue = 0;

            int iteration = fractal[y * WIDTH + x];

            if (iteration != Mandelbrot::MAX_ITERATIONS)
            {
                // CONVERSIONS CONVERSIONS
                // map this to a color (double) - Cast has a higher priority then the division
                // uint8_t color = (uint8_t)(256 * (double)iteration / Mandelbrot::MAX_ITERATIONS);

                // just to improve the visibility of the color / it´s cut off when 255 is exceeded due the casting to uint8_t - fact
                // here we can play around with the colors

                // not actual hue but we use this in some way
                double hue = 0.0;

                // we changing the color acc. to the number of color iteration below or equal the present number

                for (int i = 0; i <= iteration; i++)
                {
                    hue += ((double)histogram[i]) / total;
                }

                // color = color * color * color;
                // we use now the hue calculation for setting 3 colors
                red = pow(255, hue);
            }

            bmp.setPixel(x, y, red, green, blue);

            // 			if (yFractal < min)
            // 				min = yFractal;
            // 			if (yFractal > max)
            // 				max = yFractal;

            //             if (xFractal < min)
            //                 min = xFractal;
            //             if (xFractal > max)
            //                 max = xFractal;
        }
    }

    bmp.write("fractalImage.bmp");

    cout << "finished" << endl;
    return 0;
}
