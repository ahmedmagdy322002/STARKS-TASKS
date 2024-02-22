#include <stdio.h>

// Function to calculate sum and product of two numbers
void calculate(int num1, int num2, int *sum, int *product) {
    *sum = num1 + num2;
    *product = num1 * num2;
}

int main() {
    int number1, number2;
    int sum, product;

    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);

    calculate(number1, number2, &sum, &product); // Pass the addresses of 'sum' and 'product' variables

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}
