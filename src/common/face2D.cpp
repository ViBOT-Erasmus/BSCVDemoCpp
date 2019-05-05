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

Face2D::~Face2D()
{
}
