#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

std::string Solution::Swaps(std::string s, int x, int y){
  char temp;
  temp=s[x];
  s[x]=s[y];
  s[y]=temp;
  return s;
}
void Solution::Rev(std::string &s){
  std::reverse(s.begin(), s.end());
}
void Solution::lowerletter(std::string &s){
  for(auto &n: s){
    n=tolower(n);
  }
}