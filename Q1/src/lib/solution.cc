#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}


int Solution::Add(int num1, int num2){
  return num1+num2;
}
std::string Solution::Add(std::string s1, std::string s2){
 return  s1+s2;
}
std::string Solution::Add(std::string s, int num){
 return s+std::to_string(num);
}