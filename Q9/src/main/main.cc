#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::vector<int> vec={1,2,3,4};
// std::cout << solution.PrintHelloWorld() << std::endl;
    solution.RotateV(vec, 1);
    for(auto n: vec){
        std::cout<<n<<' ';
    }
    std::cout<<std::endl;
    solution.RotateV(vec, 2);
    for(auto n: vec){
        std::cout<<n<<' ';
    }
    std::cout<<std::endl;
    solution.RotateV(vec, 3);
    for(auto n: vec){
        std::cout<<n<<' ';
    }
    std::cout<<std::endl;
    solution.RotateV(vec, 4);
    for(auto n: vec){
        std::cout<<n<<' ';
    }
    std::cout<<std::endl;
    return EXIT_SUCCESS;
}