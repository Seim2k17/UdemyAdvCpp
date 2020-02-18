
#include "FractalCreator.h"
#include "RGB.h"
#include <iostream>

using namespace std;
using namespace fractalCreator;

// void printArray(const unique_ptr<int[]>& Array)
// {
//     int count = 0;
//     for (int i = 0; i < Mandelbrot::MAX_ITERATIONS; i++)
//     {
//         cout << "A[" << i << "]: " << Array[i] << endl;
//         count += Array[i];
//     }
//
//     cout << "Count Pixel: " << count << endl;
// }

int main()
{
    //     FractalCreator* FractalGen = new FractalCreator(800, 600);
    //
    // 	FractalGen->addZoom(Zoom(750, m_height - 25, 0.1));
    // 	FractalGen->addZoom(Zoom(403, m_height - 314, 0.005));
    //
    // 	FractalGen->calculateTotaliterations();
    //
    // 	FractalGen->calculateIteration();
    //
    //     FractalGen->drawFractal();
    //
    //     FractalGen->writeBitmap("fractalFinal.bmp");

    RGB rgb1(4, 5, 6);
    RGB rgb2(1, 2, 3);

    RGB rgb3 = rgb1 - rgb2;

    cout << rgb3.r << "," << rgb3.g << "," << rgb3.b << endl;

    FractalCreator FractalGen(800, 600);

    int height = 600;

    FractalGen.addZoom(Zoom(750, height - 25, 0.1));
    FractalGen.addZoom(Zoom(403, height - 314, 0.005));

    FractalGen.calculateTotaliterations();

    FractalGen.calculateIteration();

    FractalGen.drawFractal();

    FractalGen.writeBitmap("fractalFinal.bmp");

    return 0;
}
