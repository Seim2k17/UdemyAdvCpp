#pragma once

namespace fractalCreator
{
    struct RGB
    {
        RGB(double _r, double _g, double _b);

        double r;
        double g;
        double b;
    };

	RGB operator-(const RGB& first, const RGB& second);

} // namespace fractalCreator
