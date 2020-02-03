#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    // std::cout << solution.PrintHelloWorld() << std::endl;
    std::string s="Good Morning";
    s=solution.Swaps(s, 2, 3);
    std::cout<<s<<std::endl;
    solution.Rev(s);
    std::cout<<s<<std::endl;
    solution.lowerletter(s);
    std::cout<<s<<std::endl;

    return EXIT_SUCCESS;
}