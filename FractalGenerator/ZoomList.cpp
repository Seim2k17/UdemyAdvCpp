#include "ZoomList.h"
#include "Zoom.h"

fractalCreator::ZoomList::ZoomList(int width, int height)
    : m_width(width)
    , m_height(height)
{
}

void fractalCreator::ZoomList::add(const Zoom& zoom)
{
    zooms.push_back(zoom);
}

std::pair<double, double> fractalCreator::ZoomList::doZoom(int x, int y)
{
    return pair<double, double>(0, 0);
}
