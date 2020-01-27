#pragma once

namespace fractalCreator
{
    struct Zoom
    {
        int x{0};
        int y{0};
        double scale{0.0};
        Zoom(int _x, int _y, double _scale)
            : x(_x)
            , y(_y)
            , scale(_scale){};
    };
} // namespace fractalCreator
