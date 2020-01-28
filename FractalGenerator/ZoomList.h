#pragma once

#include "Zoom.h"
#include <utility>
#include <vector>

using namespace std;

namespace fractalCreator
{
    class ZoomList
    {
    private:
		double m_xCenter{0};
		double m_yCenter{0};
		// combined scale of all the scales from the zoomList
		double m_scale{0};
        
		int m_width{0};
        int m_height{0};
        vector<Zoom> zooms;

    public:
        ZoomList(int width, int height);
        void add(const Zoom& zoom);
        //included in utility
        pair<double, double> doZoom(int x, int y);
    };
} // namespace fractalCreator
