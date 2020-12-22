#include "currency.h"
#include <gtest/gtest.h>
using namespace std;

TEST(Currency, EmptyConstructor) 
{
    Currency C1;
    Currency C2;
    Currency C3 = (C1 + C2);
    
    EXPECT_EQ(0, C3.getRupees());
    EXPECT_EQ(0, C3.getPaisa());
}

TEST(Currency, Addition) 
{
    Currency C1(10,20);
    Currency C2(30,40);
    	
    Currency C3 = (C1 + C2);
    
    Currency C5 = (C1 + 5);
    	
    EXPECT_EQ(40, C3.getRupees());
	EXPECT_EQ(60, C3.getPaisa());
	
	EXPECT_EQ(15, C5.getRupees());
	EXPECT_EQ(25, C5.getPaisa());
	
}
    	
TEST(Currency, PreIncrement) 
{
    Currency C1(10,20);
    
    Currency& C4 = ++C1;    	
    	
    EXPECT_EQ(11, C4.getRupees());
	EXPECT_EQ(21, C4.getPaisa());
	
}

TEST(Currency, PostIncrement) 
{
	Currency C1(10,20);
    	    	
    Currency C3 = C1++;
    	
    EXPECT_EQ(10, C3.getRupees());
	EXPECT_EQ(20, C3.getPaisa());
}
   
TEST(Currency, equals) 
{
	Currency C1(10,20);
    Currency C2(10,20);    	
      	
    EXPECT_EQ(1, (C1 == C2));
}
	
