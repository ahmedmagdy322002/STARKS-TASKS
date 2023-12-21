#include <stdio.h>

int main() {
    int N, M;

    while (1) {
        // Input
        printf("Enter the first number: ");
        scanf("%d", &N);
        printf("Enter the Second number: ");
        scanf("%d", &M);

        // Check if any number is less than or equal to zero
        if (N <= 0 || M <= 0) {
            break;
        }

        // Print the numbers and their sum
        int sum = 0;
        printf("%d", N);
        sum += N;

        for (int i = N + 1; i <= M; ++i) {
            printf(" %d", i);
            sum += i;
        }

        printf(" sum = %d\n", sum);
    }

    return 0;
}


