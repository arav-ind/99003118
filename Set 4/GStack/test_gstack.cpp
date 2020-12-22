#include "gstack.h"
#include "gtest/gtest.h"
#include"gstack.cpp"


TEST(MyStack, Empty_Constructor) {
  MyStack<int> s1;
  EXPECT_EQ(true, s1.isEmpty());
  EXPECT_EQ(false, s1.isFull());
}

TEST(MyStack, Parametrized_Constructor) {
  MyStack<int> s1(10);
  s1.push(10);
  s1.push(20);
  s1.push(30);
  EXPECT_EQ(false, s1.isEmpty());
  EXPECT_EQ(false, s1.isFull());
  EXPECT_EQ(30, s1.peek());
  EXPECT_EQ(30, s1.pop());
  EXPECT_EQ(20, s1.peek());
}


