#include <stdio.h>

#define MAX_SIZE 100

// Function to concatenate two arrays
void concatenateArrays(char array1[], char array2[], char result[]) {
    int i = 0, j = 0;

    // Copy elements from the first array
    while (array1[i] != '\0') {
        result[j] = array1[i];
        i++;
        j++;
    }

    // Copy elements from the second array
    i = 0;
    while (array2[i] != '\0') {
        result[j] = array2[i];
        i++;
        j++;
    }

    // Add null terminator to the result array
    result[j] = '\0';
}

int main() {
    char array1[MAX_SIZE], array2[MAX_SIZE], result[2 * MAX_SIZE];

    // Input the first array
    printf("Enter the first array: ");
    gets(array1);

    // Input the second array
    printf("Enter the second array: ");
    gets(array2);

    // Concatenate the two arrays
    concatenateArrays(array1, array2, result);

    // Display the concatenated array
    printf("Concatenated array: %s\n", result);

    return 0;
}

