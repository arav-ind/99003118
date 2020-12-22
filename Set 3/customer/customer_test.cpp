#include "customer.h"
#include"postpaid.h"
#include"prepaid.h"
#include <gtest/gtest.h>
namespace{
TEST(Customer,Postpaid) {
    PostpaidCustomer p1("0001","Aravind","8012544554",1500,15);
    p1.postpaidbill(500);
    p1.credit(200);
    p1.makeCall(10);
    EXPECT_EQ(1190,p1.getBalance());

}

TEST(Customer,Prepaid) {
    PostpaidCustomer p1("0002","Abhishek","8126467099",300,15);
    p1.credit(200);
    p1.makeCall(30);
    EXPECT_EQ(470,p1.getBalance());
}

}
