#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

void Solution::Uni_non_set (std::vector<int> &vec){
  if(vec.size()!=0){
    for(int i=0; i<vec.size()-1;i++){
     for(int j=i+1; j<vec.size();j++){
       if(vec[i]==vec[j]){
          vec.erase(vec.begin()+j);
       }
      
      }
    }
  }
}
void Solution::Uni_set (std::vector<int> &vec){
  std::set<int> temp;
  for(int i : vec){
    temp.insert(i);
  }
  // for (auto it=temp.begin(); it != temp.end(); ++it) 
  //       std::cout << ' ' << *it; 
  vec.clear();
  std::copy(temp.begin(), temp.end(), std::back_inserter(vec));
}
void Solution::Rev (std::vector<int> &vec){
  std::reverse(vec.begin(),vec.end());
}
bool IsOdd (int i) { return ((i%2)==1); }
void Solution::ReOdd (std::vector<int> &vec){
  vec.erase(std::remove_if (vec.begin(), vec.end() , IsOdd),vec.end());
}
std::vector<int> Solution::Con (std::vector<int> vec1,std::vector<int> vec2){
  vec1.insert(vec1.end(),vec2.begin(),vec2.end());
  return vec1;
}
std::vector<int> Solution::Fincom (std::vector<int> vec1,std::vector<int> vec2){
  std::vector<int> vec;
  std::set_intersection(vec1.begin(), vec1.end(), 
                   vec2.begin(), vec2.end(), std::back_inserter(vec));
  return vec;
}

void Solution::print(std::vector<int> vec){
  for(int i=0; i<vec.size();i++){
    std::cout<<vec.at(i)<<' ';
  }
  std::cout<<std::endl;
}