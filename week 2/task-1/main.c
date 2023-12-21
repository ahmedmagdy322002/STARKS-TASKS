#include <stdio.h>

int main() {
    int num1, num2;
    char choice;

    do {
        printf("Enter the first number: ");
        scanf("%d", &num1);

        printf("Enter the second number: ");
        scanf("%d", &num2);

        int sum = num1 + num2;
        printf("Sum: %d\n", sum);

        printf("Do you want to continue (yes/no)? ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    return 0;
}

