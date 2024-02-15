#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[5] = {0};

        printf("Enter the values of the array to check: \n");
    for (int i = 0; i < 5; i++) {

        scanf("%d", &array[i]);
    }

    int max = array[0];

    for (int i = 0; i < 5; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }


    printf("\nThe biggest value in the array: %d\n", max);

    for (int i = 0; i < 5; i++) {
        if (array[i] < max) {
            max = array[i];
        }
    }

    printf("\nThe smallest value in the array: %d\n", max);
    return 0;
}

