#include "distance.h"
#include <gtest/gtest.h>
using namespace std;


TEST(Distance, EmptyConnstructor) 
{
    	Distance C1;
    	Distance C2;
    	Distance C3 = (C1 + C2);
    	
    	EXPECT_EQ(0, C3.getfeet());
    	EXPECT_EQ(0, C3.getinch());
}

TEST(Distance, Addition) 
{
	Distance C1(10,2);
    	Distance C2(5,3);
    	
    	Distance C3 = (C1 + C2);
    	
    	Distance C5 = (C1 + 3);
    	
    	EXPECT_EQ(15, C3.getfeet());
	EXPECT_EQ(5, C3.getinch());
		
	EXPECT_EQ(13, C5.getfeet());
	EXPECT_EQ(5, C5.getinch());

}

TEST(Distance, Preincrement) 
{
    	Distance C1(20,19);
    	    	
     	Distance& C4 = ++C1;    	
    	
    	EXPECT_EQ(21, C4.getfeet());
	EXPECT_EQ(20, C4.getinch());	
	
}

TEST(Distance, Postincrement) 
{
	Distance C1(20,19);
    	    	
    	Distance C3 = C1++;
    	
    	EXPECT_EQ(20, C3.getfeet());
	EXPECT_EQ(19, C3.getinch());
}
   
TEST(Distance, equals) 
{
	Distance C1(20,19);
    	Distance C2(20,19);    	
    	  	
    	EXPECT_EQ(1, (C1 == C2));
}

