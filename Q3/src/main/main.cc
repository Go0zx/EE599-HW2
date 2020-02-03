#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::vector<int> test1={1,2,2,4,5,6};
    std::vector<int> test2={2,3,3,5,6};
    std::vector<int> test3,test4;
    std::cout<<"vec1 :";
    solution.print(test1);
    std::cout<<"vec2 :";
    solution.print(test2);
    // std::cout << solution.PrintHelloWorld() << std::endl;
    solution.Uni_non_set (test1);       //1,2,4,5,6
    solution.print(test1);
    solution.Uni_set (test2);           //2,3,5,6
    solution.print(test2);
    solution.Rev (test1);               //6,5,4,2,1
    solution.print(test1);
    solution.ReOdd (test2);             //2,6
    solution.print(test2);
    test3=solution.Con (test1,test2);   //6,5,4,2,1,2,6
    solution.print(test3);
    test4=solution.Fincom (test1,test2);//6
    solution.print(test4);
    return EXIT_SUCCESS;
}