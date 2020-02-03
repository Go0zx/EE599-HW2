#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

void Solution::Swap_r(int &num1, int &num2){
  int temp;
  temp=num1;
  num1=num2;
  num2=temp;
}
void Solution::Swap_p(int *num1, int *num2){
  int temp;
  temp=*num1;
  *num1=*num2;
  *num2=temp;
}