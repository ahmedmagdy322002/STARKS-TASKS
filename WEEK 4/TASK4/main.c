#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[5] = {0};

        printf("Enter the values of the array to check: \n");
    for (int i = 0; i < 5; i++) {

        scanf("%d", &array[i]);
    }

    int SUM_OF_EVEN = 0 ;
        int product_OF_ODD = 1 ;


    for (int i = 0; i < 5; i++) {
        if (array[i]% 2 ==0) {
            SUM_OF_EVEN += array[i];
        }

        else{
            product_OF_ODD *= array[i];
        }
    }


    printf("\nThe SUM_OF_EVEN in the array: %d\n", SUM_OF_EVEN);

    printf("\nThe product_OF_ODD in the array: %d\n", product_OF_ODD);

    return 0;
}

