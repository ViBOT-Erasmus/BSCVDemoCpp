// Copyright 2019 Arsanios Mickael
#ifndef FACE2D_H
#define FACE2D_H

#include <vector>
#include "point.hpp"

namespace demobscv
{
namespace shape2d
{
class Face2D
{
public:
    Face2D();
    Face2D(const double &);                 // length
    Face2D(const double &, const double &); // width

    inline void set_width(const double &width)
    {
        points[2].x = points[0].x + width;
        points[3].x = points[0].x + width;
    };

    inline void set_length(const double &length)
    {
        points[1].y = points[0].y + length;
        points[2].y = points[0].y + length;
    };

    inline double get_width() const
    {
        return points[2].x - points[0].x;
    };

    inline double get_length() const
    {
        return points[1].y - points[0].y;
    };

    inline std::vector<Point> get_points()
    {
        return points;
    }

    ~Face2D();

private:
    std::vector<Point> points;
};
} // namespace shape2d
} // namespace demobscv
#endif /* !FACE2D_H */
