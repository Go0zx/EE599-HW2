#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

  std::map<char,char> Solution::Mapping(std::string from, std::string to){
    std::map<char,char> empty;
    std::map<char,char> result;
    if(from.size()!=to.size()) return empty;
    else{
      for(int i=0; i< from.size(); i++){
        if(from[i]==to[i]) return empty;
        result.insert(std::pair<char,char>(from[i],to[i]));
      }
      for(int i=0; i< from.size()-1; i++){
        for(int j=i+1; j< from.size(); j++){
          if((from[i]==from[j])&&(to[i]!=to[j])) return empty;
        }
      }

    }
    return result;
  }
