#include "RGB.h"

namespace fractalCreator
{
    RGB::RGB(double _r, double _g, double _b)
        : r(_r)
        , g(_g)
        , b(_b)
    {
    }

    RGB operator-(const RGB& first, const RGB& second)
    {
        return RGB(first.r - second.r, first.g - second.g, first.b - second.b);
    }

} // namespace fractalCreator
