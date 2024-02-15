#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    int array[5][5];

    // Input values from the user to populate the array
    printf("Enter values for the 5x5 array:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Enter value for array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

     printf("Please wait ");
    for(int UserPassIndex = 0; UserPassIndex < 15; UserPassIndex++){
        printf(".");
        Sleep(100);
    }


    int sum1 = 0;

    printf("\nThe sum of the rows:\n");
    for (int x = 0; x < 5; x++) {
        for (int y = 0; y < 5; y++) {
            sum1 = sum1 + array[x][y];
        }
        printf("%d\n", sum1);
        sum1 = 0;
    }
        int sum2 =0 ;
        printf("\nThe sum of the Columes:\n");
    for (int y = 0; y < 5; y++) {
        for (int x = 0; x < 5; x++) {
            sum2 = sum2 + array[y][x];
        }
        printf("%d\n", sum2);
        sum2 = 0;
    }


    return 0;
}

