#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <iostream>


class Solution {
public:
  std::string PrintHelloWorld();
  void Uni_non_set (std::vector<int> &vec);
  void Uni_set (std::vector<int> &vec);
  void Rev (std::vector<int> &vec);
  void ReOdd (std::vector<int> &vec);
  std::vector<int> Con (std::vector<int> vec1,std::vector<int> vec2);
  std::vector<int> Fincom (std::vector<int> vec1,std::vector<int> vec2);
  void print(std::vector<int> vec);
};

#endif