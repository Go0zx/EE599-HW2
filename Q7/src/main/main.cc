#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::map<char,char> result;
    std::string s1="aabbrr";
    std::string s2="ddeekk";
    // std::cout << solution.PrintHelloWorld() << std::endl;
    result=solution.Mapping(s1,s2);
    for(auto n: result){
        std::cout<<n.first<<"->"<<n.second<<' ';
    }
    return EXIT_SUCCESS;
}