#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Rearranges, ReturnRearranges1) {
  Solution solution;
  std::vector<int> actual = {637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500};
  solution.Rearranges(actual);
  std::vector<int> expected = { 43, 43, 21,10, 7, 0, 69, 900, 637, 500, 231, 123, 99 };
  EXPECT_EQ(expected, actual);
}

TEST(Rearranges, ReturnRearranges2) {
  Solution solution;
  std::vector<int> actual = {637, 231, 123, 43, 43, 900, 10, 7, 21, 99, 0, 500};
  solution.Rearranges(actual);
  std::vector<int> expected = { 43, 43, 21,10, 7, 0, 900, 637, 500, 231, 123, 99 };
  EXPECT_EQ(expected, actual);
}