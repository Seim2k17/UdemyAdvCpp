#include "ZoomList.h"
#include "Zoom.h"
#include <iostream>

using namespace std;

fractalCreator::ZoomList::ZoomList(int width, int height)
    : m_width(width)
    , m_height(height)
{
}

void fractalCreator::ZoomList::add(const Zoom& zoom)
{
    zooms.push_back(zoom);

    // how far is the click from the center ? / converted to fractal coordinates
    m_xCenter += (zoom.x - m_width / 2) * m_scale;
    m_yCenter += (zoom.y - m_height / 2) * m_scale;

    m_scale *= zoom.scale;

    cout << m_xCenter << "," << m_yCenter << ", " << m_scale << endl;
}

std::pair<double, double> fractalCreator::ZoomList::doZoom(int x, int y)
{
	// ZoomAlgorithm
	double xFractal = (x - m_width / 2)*m_scale + m_xCenter;
	double yFractal = (y - m_height / 2)*m_scale + m_yCenter;
    return pair<double, double>(xFractal, yFractal);
}
