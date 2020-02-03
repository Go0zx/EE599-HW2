#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

void Solution::Rearranges(std::vector<int> &inputs) {
  int oe;
  int medium;
  std::vector<int> temp;
  
    oe=inputs.size()%2;
    medium=inputs.size()/2;
  
  std::sort(inputs.begin(), inputs.end());
  
  // if(oe) return inputs[medium];
  // else return ((float)inputs[medium-1]+(float)inputs[medium])/(float)2;
  
   if(oe){
    std::reverse(inputs.begin(),inputs.begin()+medium); 
    std::reverse(inputs.begin()+medium+1,inputs.end()); 
   }
   else{
     std::reverse(inputs.begin(),inputs.begin()+medium); 
     std::reverse(inputs.begin()+medium,inputs.end()); 
   }
}
