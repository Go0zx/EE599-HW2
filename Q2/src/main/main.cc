#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    // std::cout << solution.PrintHelloWorld() << std::endl;

    int arr1[100];
    char arr2[200];
    float arr3[300];
    std::cout<<"size of arr1[100] = "<<sizeof(arr1)/sizeof(arr1[0])<<std::endl;
    std::cout<<"size of arr2[200] = "<<sizeof(arr2)/sizeof(arr2[0])<<std::endl;
    std::cout<<"size of arr3[300] = "<<sizeof(arr3)/sizeof(arr3[0])<<std::endl;
    return EXIT_SUCCESS;
}