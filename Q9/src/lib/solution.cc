#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

void Solution::RotateV(std::vector<int> &vec, int num){
  std::rotate(vec.begin(),vec.end()-num,vec.end());
}