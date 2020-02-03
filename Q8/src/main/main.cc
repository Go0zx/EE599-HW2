#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::vector<int> input1={637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500};
    std::vector<int> input2={637, 231, 123, 43, 43, 900, 10, 7, 21, 99, 0, 500};
// std::cout << solution.PrintHelloWorld() << std::endl;
    solution.Rearranges(input1);
    for(auto n: input1){
        std::cout<<n<<" ";
    }
    std::cout<<std::endl;
    solution.Rearranges(input2);
    for(auto n: input2){
        std::cout<<n<<" ";
    }
    return EXIT_SUCCESS;
}