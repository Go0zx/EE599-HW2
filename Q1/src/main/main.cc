#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    // std::cout << solution.PrintHelloWorld() << std::endl;
    std::cout<<"3 + 5 = " << solution.Add(3,5)<<std::endl;
    std::cout<<"abc + efg = " << solution.Add("abc","efg")<<std::endl;
    std::cout<<"EE + 599 = " << solution.Add("EE",599)<<std::endl;
    return EXIT_SUCCESS;
}