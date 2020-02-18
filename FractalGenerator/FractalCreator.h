#pragma once

#include "Bitmap.h"
#include "Mandelbrot.h"
#include "Zoom.h"
#include "ZoomList.h"
#include <cstdint>
#include <math.h>
#include <memory>
#include <string>

using namespace std;
//using namespace fractalCreator;

namespace fractalCreator
{
    class FractalCreator
    {
    public:
        FractalCreator(int width, int height);
        virtual ~FractalCreator();

        void calculateIteration();
        void calculateTotaliterations();
        void drawFractal();
        void addZoom(const Zoom& zoom);
        void writeBitmap(string name);

    private:
        Bitmap m_bmp;

        int m_total{0};

        unique_ptr<int[]> m_histogram;
        unique_ptr<int[]> m_fractal;

        ZoomList m_zoomList;

        int m_width;
        int m_height;
    };
} // namespace fractalCreator
