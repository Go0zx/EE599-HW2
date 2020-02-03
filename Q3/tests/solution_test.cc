#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(test, returntest1) {
  Solution solution;
  std::vector<int> actualnonset={1,2,2,4,5,6};
  std::vector<int> actualset={1,2,2,4,5,6};
  solution.Uni_non_set(actualnonset);
  solution.Uni_set (actualset); 
  std::vector<int> expected = {1,2,4,5,6};
  EXPECT_EQ(expected, actualnonset);
  EXPECT_EQ(expected, actualset);
}

TEST(test, returntest2) {
  Solution solution;
  std::vector<int> actual={1,2,3,4,5};
  solution.Rev(actual);
  std::vector<int> expected = {5,4,3,2,1};
  EXPECT_EQ(expected, actual);
}

TEST(test, returntest3) {
  Solution solution;
  std::vector<int> actual={1,2,3,4,5};
  solution.ReOdd(actual);
  std::vector<int> expected = {2,4};
  EXPECT_EQ(expected, actual);
}

TEST(test, returntest4) {
  Solution solution;
  std::vector<int> vec1={3,2,1};
  std::vector<int> vec2={1,2,3};
  std::vector<int> actual;
  actual=solution.Con(vec1,vec2);
  std::vector<int> expected = {3,2,1,1,2,3};
  EXPECT_EQ(expected, actual);
}

TEST(test, returntest5) {
  Solution solution;
  std::vector<int> vec1={3,6,2};
  std::vector<int> vec2={1,3,9};
  std::vector<int> actual;
  actual=solution.Fincom(vec1,vec2);
  std::vector<int> expected = {3};
  EXPECT_EQ(expected, actual);
}