#include "lib/lib.h"

#include "gtest/gtest.h"

TEST(libtest, should_pass) {
  EXPECT_EQ(fn(5), 10);
  EXPECT_EQ(fn(-3), -6);
  EXPECT_EQ(fn(1), 2);
}

TEST(libtest, should_fail) {
  EXPECT_EQ(fn(3), -2);
  EXPECT_EQ(fn(0), 1);
}
