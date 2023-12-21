#include <stdio.h>

int main() {
    // Input
    int a, b;
     printf("Enter the weight of Limak :\n");
    scanf(" %d", &a);
    printf("Enter the weight of Bob :\n");
    scanf(" %d", &b);

    // Simulate the weight increase
    int years = 0;
    while (a <= b) {
        a *= 3; // Limak's weight is tripled
        b *= 2; // Bob's weight is doubled
        years++;
    }

    // Output
    printf("%d\n", years);

    return 0;
}

