#include "solution.h"

void RotaeV(std::vector<int> &vec, int num){
  std::rotate(vec.begin(),vec.end()-num+1,vec.end());
}