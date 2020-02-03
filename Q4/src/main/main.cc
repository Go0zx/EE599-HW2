#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    // std::cout << solution.PrintHelloWorld() << std::endl;
    int num1=0,num2=1;
    int num3=100, num4=200;
    std::cout<<"num1: "<<num1<<std::endl;
    std::cout<<"num2: "<<num2<<std::endl;
    std::cout<<"num3: "<<num3<<std::endl;
    std::cout<<"num4: "<<num4<<std::endl;
    solution.Swap_r(num1,num2);
    solution.Swap_p(&num3,&num4);
    std::cout<<"num1: "<<num1<<std::endl;
    std::cout<<"num2: "<<num2<<std::endl;
    std::cout<<"num3: "<<num3<<std::endl;
    std::cout<<"num4: "<<num4<<std::endl;

    return EXIT_SUCCESS;
}