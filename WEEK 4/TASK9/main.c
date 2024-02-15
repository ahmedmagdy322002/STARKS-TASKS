#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    // Display the modified string with '*' between each character
    printf("Modified string with '*' between characters:\n");
    for (int i = 0; i < strlen(str); i++) {
        printf("%c", str[i]);
        if (i != strlen(str) - 1) {
            printf("*");
        }
    }

    return 0;
}


