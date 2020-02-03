#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

std::string Solution::CheckSimpleP(std::string s){
  int medium;
  std::string s1, s2;
  if(s.size()%2==0){
    medium=s.size()/2;
    s1=s.substr(0,medium);
    s2=s.substr(medium,medium);
    reverse(s2.begin(),s2.end());
    if(s1.compare(s2)==0) return "true";
    else return "false";
  }
  else if(s.size()%2==1){
    medium=s.size()/2;
    s1=s.substr(0,medium);
    s2=s.substr(medium+1,medium);
    reverse(s2.begin(),s2.end());
    if(s1.compare(s2)==0) return "true";
    else return "false";
  }
}
void lowerletter(std::string &s){
  for(auto &n: s){
    n=tolower(n);
  }
}

std::string Solution::CheckApproP(std::string s){
  std::string result;
  for (int i = 0; i < s.size(); i++) { 
        if (ispunct(s[i])) { 
            s.erase(i--, 1); 
        } 
        if (s[i]==' ') { 
            s.erase(i--, 1); 
        } 
  } 
  lowerletter(s);
  result=CheckSimpleP(s);
  return result;
}