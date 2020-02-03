#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Addshould, ReturnAdd150) {
  Solution solution;
  int actual = solution.Add(100,50);
  int expected = 150;
  EXPECT_EQ(expected, actual);
}
TEST(Addshould, ReturnAdd50) {
  Solution solution;
  int actual = solution.Add(20,30);
  int expected = 50;
  EXPECT_EQ(expected, actual);
}
TEST(Addshould, ReturnAdd88) {
  Solution solution;
  int actual = solution.Add(66,22);
  int expected = 88;
  EXPECT_EQ(expected, actual);
}
TEST(Addshould, ReturnAddHelloWorld) {
  Solution solution;
  std::string actual = solution.Add("Hello"," World");
  std::string expected = "Hello World";
  EXPECT_EQ(expected, actual);
}
TEST(Addshould, ReturnAddGoodGame) {
  Solution solution;
  std::string actual = solution.Add("Good"," Game");
  std::string expected = "Good Game";
  EXPECT_EQ(expected, actual);
}
TEST(Addshould, ReturnAddEE457) {
  Solution solution;
  std::string actual = solution.Add("EE",457);
  std::string expected = "EE457";
  EXPECT_EQ(expected, actual);
}
TEST(Addshould, ReturnAddEE577) {
  Solution solution;
  std::string actual = solution.Add("EE",577);
  std::string expected = "EE577";
  EXPECT_EQ(expected, actual);
}

