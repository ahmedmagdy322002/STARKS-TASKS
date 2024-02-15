#include <stdio.h>

#define MAX_SIZE 100

// Function to compare two string arrays
int compareStrings(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0; // Not equal
        }
        i++;
    }

    // Check if both strings have the same length
    if (str1[i] != str2[i]) {
        return 0; // Not equal
    }

    return 1; // Equal
}

int main() {
    char str1[MAX_SIZE], str2[MAX_SIZE];

    // Input the first string array
    printf("Enter the first string array: ");
    gets(str1);

    // Input the second string array
    printf("Enter the second string array: ");
    gets(str2);

    // Compare the two string arrays
    if (compareStrings(str1, str2)) {
        printf("The two string arrays are equal.\n");
    } else {
        printf("The two string arrays are not equal.\n");
    }

    return 0;
}

