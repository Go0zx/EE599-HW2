#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::string s1="madam";
    std::string s2="1001";
    std::string s3="10$^^&0(*(()     1";
    std::string s4="No 'x' in Nixon";

    //std::cout << solution.PrintHelloWorld() << std::endl;
    std::cout<<solution.CheckSimpleP(s1)<<std::endl;
    std::cout<<solution.CheckSimpleP(s2)<<std::endl;
    std::cout<<solution.CheckApproP(s3)<<std::endl;
    std::cout<<solution.CheckApproP(s4)<<std::endl;
    
    
    return EXIT_SUCCESS;
}