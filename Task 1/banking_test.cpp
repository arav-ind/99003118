#include "book.h"
#include"library.h"
#include "library.cpp"
#include "book.cpp"
#include "main.cpp"
#include <gtest/gtest.h>
#include<iostream>
using namespace std;

TEST(Library,A) {
    Library l1;
    EXPECT_EQ(1,l1->isBookFound(2));

}



