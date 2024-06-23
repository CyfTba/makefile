#include <stdio.h>
#include "head.h"
#include <iostream>
int main()
{
    int a = 20;
    int b = 10;
    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", add(a, b));
    printf("a - b = %d\n", subtract(a, b));
    printf("a * b = %d\n", multiply(a, b));
    printf("a / b = %f\n", divide(a, b));
    std::cout<<__cplusplus<<std::endl;

    return 0;
}
