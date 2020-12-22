#include "time.h"
#include <gtest/gtest.h>
using namespace std;


TEST(MyTime, EmptyConstructor) 
{
    	MyTime C1;
    	MyTime C2;
    	MyTime C3 = (C1 + C2);
    	
    	EXPECT_EQ(0, C3.gethr());
    	EXPECT_EQ(0, C3.getmin());
    	EXPECT_EQ(0, C3.getsec());
}

TEST(MyTime, ParametrizedConstructor) 
{
	MyTime C1(8,20,10);
    MyTime C2(2,2,2);
    	
	MyTime C3 = (C1 + C2);
    	
   	MyTime C5 = (C1 + 3);
    	
    EXPECT_EQ(10, C3.gethr());
	EXPECT_EQ(22, C3.getmin());
	EXPECT_EQ(12, C3.getsec());
	
	EXPECT_EQ(8, C5.gethr());
	EXPECT_EQ(23, C5.getmin());
	EXPECT_EQ(10, C5.getsec());
	
}
    	
TEST(MyTime, PreIncrement) 
{
    	MyTime C1(8,20,10);
    	    	
     	MyTime& C4 = ++C1;    	
    	
    	EXPECT_EQ(9, C4.gethr());
	EXPECT_EQ(21, C4.getmin());
	EXPECT_EQ(11, C4.getsec());
	
}

TEST(MyTime, PostIncrement) 
{
	MyTime C1(8,20,10);
    	    	
    	MyTime C3 = C1++;
    	
    	EXPECT_EQ(8, C3.gethr());
	EXPECT_EQ(20, C3.getmin());
	EXPECT_EQ(10, C3.getsec());
}
   
TEST(MyTime, Equals) 
{
	MyTime C1(8,20,10);
    MyTime C2(8,20,10);    	
    	  	
    EXPECT_EQ(1, (C1 == C2));
}
	


