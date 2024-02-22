#include <stdio.h>

// Function to calculate factorial
void factorial(int num, unsigned long long *result) {
    *result = 1; // Initialize result to 1

    // Calculate factorial
    for (int i = 1; i <= num; i++) {
        *result *= i;
    }
}

int main() {
    int number;
    unsigned long long fact = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    factorial(number, &fact); // Pass the address of 'fact' variable

    printf("Factorial of %d is %llu\n", number, fact);

    return 0;
}
