#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(test1, returntest1) {
  Solution solution;
  std::string actual="abcDeFg";
  actual = solution.Swaps(actual,2,3);
  std::string expected = "abDceFg";
  EXPECT_EQ(expected, actual);
}
TEST(test1, returntest2) {
  Solution solution;
  std::string actual="abDceFg";
  solution.Rev(actual);
  std::string expected = "gFecDba";
  EXPECT_EQ(expected, actual);
}
TEST(test1, returntest3) {
  Solution solution;
  std::string actual="gFecDba";
  solution.lowerletter(actual);
  std::string expected = "gfecdba";
  EXPECT_EQ(expected, actual);
}
    
   
