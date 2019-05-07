// Copyright 2019 Arsanios Mickael
#include <gtest/gtest.h>
#include <common/face2D.hpp>

// Create our own test to check the different function of our class
// This function will take two arguments:
// * The test case name
// * The test name

TEST(FaceBuild, DefaultVal)
{
    demobscv::shape2d::Face2D zero_face;
    ASSERT_DOUBLE_EQ(zero_face.get_length(), 0.0);
    ASSERT_DOUBLE_EQ(zero_face.get_width(), 0.0);
}

TEST(FaceBuild, Square)
{
    demobscv::shape2d::Face2D square_face(3.0);
    ASSERT_DOUBLE_EQ(square_face.get_length(), 3.0);
    ASSERT_DOUBLE_EQ(square_face.get_width(), 3.0);
}

TEST(FaceBuild, Rectangle)
{
    demobscv::shape2d::Face2D rec_face(3.0, 5.0);
    ASSERT_DOUBLE_EQ(rec_face.get_length(), 3.0);
    ASSERT_DOUBLE_EQ(rec_face.get_width(), 5.0);
}

TEST(FaceDimensions, ChangeWidthLenght)
{
    demobscv::shape2d::Face2D rec_face(3.0, 5.0);
    rec_face.set_width(3.5);
    rec_face.set_length(1.25);
    ASSERT_DOUBLE_EQ(rec_face.get_length(), 1.25);
    ASSERT_DOUBLE_EQ(rec_face.get_width(), 3.5);
}

TEST(FacePoints, Getter)
{
    double length = 3.0;
    double width = 5.0;
    demobscv::shape2d::Face2D rec_face(length, width);
    std::vector<Point> points = rec_face.get_points();
    ASSERT_DOUBLE_EQ(points[0].x, 0.0);
    ASSERT_DOUBLE_EQ(points[0].y, 0.0);
    ASSERT_DOUBLE_EQ(points[1].x, 0.0);
    ASSERT_DOUBLE_EQ(points[1].y, length);
    ASSERT_DOUBLE_EQ(points[2].x, width);
    ASSERT_DOUBLE_EQ(points[2].y, length);
    ASSERT_DOUBLE_EQ(points[3].x, width);
    ASSERT_DOUBLE_EQ(points[3].y, 0.0);
}
