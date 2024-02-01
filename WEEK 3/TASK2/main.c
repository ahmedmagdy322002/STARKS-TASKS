#include <stdio.h>
#include <stdlib.h>

#include "TASK2.h"

int main()
{
    unsigned long long int number;
    printf("Please enter the number ");
    scanf("%d",&number);

        unsigned long long int fib = fibonacci(number);
    printf("The %u-th Fibonacci number is %llu\n", number, fib);

    return 0;
}
