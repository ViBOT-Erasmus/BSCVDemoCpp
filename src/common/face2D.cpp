#include "face2D.hpp"

Face2D::Face2D()
{
    points = {Point(0, 0),
              Point(0, 0),
              Point(0, 0),
              Point(0, 0)};
}

Face2D::Face2D(const double &length)
{
    points = {Point(0, 0),
              Point(0, length),
              Point(length, length),
              Point(length, 0)};
}

Face2D::Face2D(const double &length, const double &width)
{
    points = {Point(0, 0),
              Point(0, length),
              Point(width, length),
              Point(width, 0)};
}

void Face2D::set_length(const double &length)
{
    points[1].y = points[0].y + length;
    points[2].y = points[0].y + length;
}

void Face2D::set_width(const double &width)
{
    points[2].x = points[0].x + width;
    points[3].x = points[0].x + width;
}

double Face2D::get_length()
{
    return points[1].y - points[0].y;
}

double Face2D::get_width()
{
    return points[2].x - points[0].x;
}

Face2D::~Face2D()
{
}
