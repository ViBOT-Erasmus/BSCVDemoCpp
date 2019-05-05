#pragma once

#include <vector>
#include "point.hpp"

class Face2D
{
public:
    Face2D();
    Face2D(const double &);                 // length
    Face2D(const double &, const double &); // width

    void set_width(const double &);
    void set_length(const double &);

    double get_width();
    double get_length();

    inline std::vector<Point> get_points()
    {
        return points;
    }

    ~Face2D();

private:
    std::vector<Point> points;
};
