#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Mappingtest, ReturnMappingtest0) {
  Solution solution;
  std::string s1="add";
  std::string s2="egg";
  std::map<char,char> actual = solution.Mapping(s1,s2);
  std::map<char,char> expected = {{'a','e'},{'d','g'}};
  EXPECT_EQ(expected, actual);
}
TEST(Mappingtest, ReturnMappingtest1) {
  Solution solution;
  std::string s1="add";
  std::string s2="ego";
  std::map<char,char> actual = solution.Mapping(s1,s2);
  std::map<char,char> expected = {};
  EXPECT_EQ(expected, actual);
}
TEST(Mappingtest, ReturnMappingtest2) {
  Solution solution;
  std::string s1="extreme";
  std::string s2="egg";
  std::map<char,char> actual = solution.Mapping(s1,s2);
  std::map<char,char> expected = {};
  EXPECT_EQ(expected, actual);
}
TEST(Mappingtest, ReturnMappingtest3) {
  Solution solution;
  std::string s1="harder";
  std::string s2="waiter";
  std::map<char,char> actual = solution.Mapping(s1,s2);
  std::map<char,char> expected = {};
  EXPECT_EQ(expected, actual);
}
TEST(Mappingtest, ReturnMappingtest4) {
  Solution solution;
  std::string s1="aabbrr";
  std::string s2="ddeekk";
  std::map<char,char> actual = solution.Mapping(s1,s2);
  std::map<char,char> expected = {{'a','d'},{'b','e'},{'r','k'}};
  EXPECT_EQ(expected, actual);
}