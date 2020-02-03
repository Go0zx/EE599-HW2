#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Rearranges, ReturnRearranges1) {
  Solution solution;
  std::vector<int> actual = {1,2,3,4};
  solution.RotateV(actual,1);
  std::vector<int> expected = {4,1,2,3};
  EXPECT_EQ(expected, actual);
}
TEST(Rearranges, ReturnRearranges2) {
  Solution solution;
  std::vector<int> actual = {1,2,3,4};
  solution.RotateV(actual,2);
  std::vector<int> expected = {3,4,1,2};
  EXPECT_EQ(expected, actual);
}
TEST(Rearranges, ReturnRearranges3) {
  Solution solution;
  std::vector<int> actual = {1,2,3,4};
  solution.RotateV(actual,3);
  std::vector<int> expected = {2,3,4,1};
  EXPECT_EQ(expected, actual);
}
TEST(Rearranges, ReturnRearranges4) {
  Solution solution;
  std::vector<int> actual = {1,2,3,4};
  solution.RotateV(actual,4);
  std::vector<int> expected = {1,2,3,4};
  EXPECT_EQ(expected, actual);
}