#include <stdio.h>

int main() {
    int matrix1[3][3], matrix2[3][3], result[3][3];

    // Input values for the first matrix
    printf("Enter elements for the first 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input values for the second matrix
    printf("\nEnter elements for the second 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize the result matrix with zeros
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the result matrix
    printf("\nThe result of the matrix multiplication:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

