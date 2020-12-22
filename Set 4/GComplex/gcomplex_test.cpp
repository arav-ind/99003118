#include "gcomplex.h"
#include "gtest/gtest.h"
#include "gcomplex.cpp"

TEST(Complex,EmptyConstructor)
{
    Complex <int> a;
    EXPECT_EQ(0,a.re());
    EXPECT_EQ(0,a.img());
}

TEST(Complex,ParameterizedConstructor)
{
    Complex <double> a(2.1,3.2);
    EXPECT_EQ(2.1,a.re());
    EXPECT_EQ(3.2,a.img());
}

