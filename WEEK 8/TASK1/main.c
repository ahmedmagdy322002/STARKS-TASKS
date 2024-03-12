#include "file.h"
#include <stdio.h>

int main() {
    int a ;
    int b;

    printf("Enter the first number :");
    scanf("%d",&a);

    printf("Enter the second number :");
    scanf("%d",&b);

    int sum = ADD(a, b);
    int difference = SUBTRACT(a, b);
    int product = MULTIPLY(a, b);
    int quotient = DIVIDE(a, b);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n\n\n", quotient);

    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    int sum_array = ARRAY_SUM(array, size);

    printf("Sum of the array: %d\n", sum_array);



    return 0;
}


