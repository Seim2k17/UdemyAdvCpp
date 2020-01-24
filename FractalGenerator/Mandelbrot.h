#pragma once

namespace fractalCreator
{
    class Mandelbrot
    {
	public:
		static const int MAX_ITERATIONS = 1000;
    public:
        Mandelbrot();
        ~Mandelbrot();

		static int getIteration(double x, double y);
    };
} // namespace fractalCreator
