#include <stdio.h>
#include <stdbool.h>

#include "function.h"


int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number)) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}
