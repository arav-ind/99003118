#include "account.h"
#include <gtest/gtest.h>
namespace {

TEST(Account, Empty_Cosnstructor) {
  Account A1;
  EXPECT_EQ(0.0, A1.getBalance());
}

TEST(Account, Parametrized_Cosnstructor) {
  Account A1("100","Aravind",500);
  EXPECT_EQ(500.0, A1.getBalance());
}


TEST(Account, Transaction) {
  Account A1("100","Aravind",500);
  A1.debit(100);
  A1.credit(32.5);
  EXPECT_EQ(432.5, A1.getBalance());
}

}
