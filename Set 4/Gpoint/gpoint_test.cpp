#include "gpoint.h"
#include "gtest/gtest.h"
#include "gpoint.cpp"
TEST(Point,ParameterizedConstructor)
{
    Point <int> a(3,7);
    Point <int> c(-8,5);
    Point <int> b(-6,-2);
    Point <int> d(15,-8);
    EXPECT_EQ(3,d.quadrant());
    EXPECT_EQ(2,b.quadrant());
    EXPECT_EQ(1,c.quadrant());
    EXPECT_EQ(0,a.quadrant());
}
