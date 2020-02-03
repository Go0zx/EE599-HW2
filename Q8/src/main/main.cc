#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::vector<int> vec={1,2,3,4};
// std::cout << solution.PrintHelloWorld() << std::endl;
    RotaeV(vec, 1);
    for(auto n: vec){
        std::cout<<n<<' ';
    }
    return EXIT_SUCCESS;
}