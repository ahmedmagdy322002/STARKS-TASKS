#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int freq[256] = {0}; // Assuming ASCII characters

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate the frequency of each character
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != '\n') {  // Ignore newline character from fgets
            freq[(int)str[i]]++;
        }
    }

    // Display the frequency of each character
    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c': %d\n", (char)i, freq[i]);
        }
    }

    // Output the frequency of the character 'i'
    printf("\n'i' frequency is: %d\n", freq[(int)'i']);

    return 0;
}



