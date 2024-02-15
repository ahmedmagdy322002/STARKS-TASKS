#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[10] = {0};
     printf("Enter values for the one dimensional array:\n");
    for (int i = 0; i < 10; i++) {

            printf("Enter value for array[%d]: ", i);
            scanf("%i", &array[i]);

                                 }

    int max = array[0];

    for (int i = 0; i < 10; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }


    printf("\nThe biggest value in the array: %d\n", max);

    for (int i = 0; i < 10; i++) {
        if (array[i] < max) {
            max = array[i];
        }
    }

    printf("\nThe smallest value in the array: %d\n", max);
    return 0;
}
