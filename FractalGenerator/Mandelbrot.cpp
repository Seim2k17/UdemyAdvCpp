#include "Mandelbrot.h"
#include <complex>

using namespace std;



fractalCreator::Mandelbrot::Mandelbrot()
{
}


fractalCreator::Mandelbrot::~Mandelbrot()
{
}

int fractalCreator::Mandelbrot::getIteration(double x, double y)
{
	// we need to calculate how many iterations are necessary
	// but for some numbers this won´t execute over 2 (for others <2 = called THE MANDELBROT SET)
	complex<double> z = 0;
	complex<double> c(x, y);

	int iterations = 0;

	// CONSTANT defined for iterations
	while (iterations < MAX_ITERATIONS)
	{
		z = z * z + c;

		// magnitude of a complex number
		//if (abs(z) > 2)
		// quick optimization
		if (norm(z) > 4)
		{
			break;
		}

		iterations++;

	}

	return iterations;
}
