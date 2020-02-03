#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Swap, returnSwap) {
  Solution solution;
  int actual1 = 321;
  int actual2 = 123;
  int expected1 = 123;
  int expected2 = 321;
  solution.Swap_r(actual1,actual2);
  int actual3 = 789;
  int actual4 = 345;
  int expected3 = 345;
  int expected4 = 789;
  solution.Swap_p(&actual3,&actual4);
  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);
}