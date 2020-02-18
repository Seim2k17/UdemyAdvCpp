#include "FractalCreator.h"
#include "Bitmap.h"
#include "Mandelbrot.h"
#include "Zoom.h"
#include "ZoomList.h"
#include <iostream>
#include <memory>

fractalCreator::FractalCreator::FractalCreator(int width, int height)
    : m_width(width)
    , m_height(height)
    , m_histogram(new int[Mandelbrot::MAX_ITERATIONS]{0})
    , m_fractal(new int[m_width * m_height]{0})
    , m_bmp(m_width, m_height)
    , m_zoomList(m_width, m_height)
{
    //int const WIDTH = width;
    //int const HEIGTH = height;

    // uff 4k =
    //int const WIDTH = 4 * 1920;
    //int const HEIGTH = 4 * 1080;

    //Bitmap bmp(m_width, m_height);

    // store how many pixels need which iteration.
    // and be sure to initialize the array with 0 ( {} )
    //unique_ptr<int[]> histogram(new int[Mandelbrot::MAX_ITERATIONS + 1]{});
    // to get rid of the very last element of the histogram we simply create a array of MaxIteration
    //unique_ptr<int[]> histogram(new int[Mandelbrot::MAX_ITERATIONS]{});

    // store the iterations for every pixel and access it later on (like a LUT !? )
    // unique_ptr<int[]> fractal(new int[WIDTH * HEIGTH]{});

    //ZoomList zoomList(m_width, m_height);

    //printArray(histogram);

    // add first zoom in constructor
    m_zoomList.add(Zoom(m_width / 2, m_height / 2, 1.0 / m_width));

    cout << "Calculated Pcx: " << m_width * m_height << endl;
}

fractalCreator::FractalCreator::~FractalCreator()
{
}

void fractalCreator::FractalCreator::calculateIteration()
{
    // 1rst Test set everything red Pixel)
    for (int y = 0; y < m_height; y++)
    {
        for (int x = 0; x < m_width; x++)
        {
            // 1. Test
            // bmp.setPixel(_w, _h, 255, 0, 0);
            // these Values should range from [-1,1] / weight over Screencoordinates --> 0 is WIDTH/2pcx / -1 = -WIDTH pcx / 1 = WIDTH pcx
            // HAE ???
            // make examples and try to spot a pattern :  [to get from [0..20] -> [-1..1] we do: 1: div by 10 [0..2] then -1 [-1..1] => (/(n/2)) -1 == (2(n) - 1)
            // 2.0 because we want to supply a float not a natural number we need to cast it to by giving 2.0 not 2
            //double xFractal = (x - WIDTH / 2 - 200) * (2.0 / WIDTH); // from -1 to +1 it´s 2 ...
            //double yFractal = (y - HEIGTH / 2) * (2.0 / HEIGTH);

            // dummyImplementation:
            // double xFractal = (x - WIDTH / 2 - 200) * (2.0 / HEIGTH);
            // double yFractal = (y - HEIGTH / 2) * (2.0 / HEIGTH);

            pair<double, double> coords = m_zoomList.doZoom(x, y);

            // to get a range from [-1,+1]

            // now we encapsulate the drawing code and here we only build the histogram
            // here we get a number of iterations for every pixel
            int iterations = Mandelbrot::getIteration(coords.first, coords.second);

            // calculate the index of the pixel
            m_fractal[y * m_width + x] = iterations;

            // build a histogram of the number of iterations we can use and check that we never pass MAX_ITERATIONS
            if (iterations != Mandelbrot::MAX_ITERATIONS)
            {
                m_histogram[iterations]++;
            }
        }
    }
}

void fractalCreator::FractalCreator::calculateTotaliterations()
{
    for (int j = 0; j < Mandelbrot::MAX_ITERATIONS; j++)
    {
        m_total += m_histogram[j];
    }
}

void fractalCreator::FractalCreator::drawFractal()
{
    // move drawing code to another loop / encapsulate

    for (int y = 0; y < m_height; y++)
    {
        for (int x = 0; x < m_width; x++)
        {
            uint8_t red = 0;
            uint8_t green = 0;
            uint8_t blue = 0;

            int iteration = m_fractal[y * m_width + x];

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
                    hue += ((double)m_histogram[i]) / m_total;
                }

                // color = color * color * color;
                // we use now the hue calculation for setting 3 colors
                // red = pow(255, hue);
                // linear color mapping (glow)
                red = hue * 255;
            }

            m_bmp.setPixel(x, y, red, green, blue);

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
}

void fractalCreator::FractalCreator::addZoom(const Zoom& zoom)
{
    m_zoomList.add(zoom);
}

void fractalCreator::FractalCreator::writeBitmap(string name)
{
    cout << "started writing" << endl;

    m_bmp.write(name);

    cout << "finished" << endl;
}
