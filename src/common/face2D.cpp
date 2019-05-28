// Copyright 2019 Arsanios Mickael
#include "face2D.hpp"

demobscv::shape2d::Face2D::Face2D()
{
    points = {Point(0, 0),
              Point(0, 0),
              Point(0, 0),
              Point(0, 0)};
}

demobscv::shape2d::Face2D::Face2D(const double &length)
{
    points = {Point(0, 0),
              Point(0, length),
              Point(length, length),
              Point(length, 0)};
}

demobscv::shape2d::Face2D::Face2D(const double &length, const double &width)
{
    points = {Point(0, 0),
              Point(0, length),
              Point(width, length),
              Point(width, 0)};
}

demobscv::shape2d::Face2D::~Face2D()
{
}
