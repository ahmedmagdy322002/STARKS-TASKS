#include <stdio.h>

int main() {
  // Initialize a character pointer to point to the starting address of the alphabet array
  char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  // Loop through each character in the array using the pointer
  while (*alphabet != '\0') {
    printf("%c", *alphabet);
    alphabet++; // Increment the pointer to the next character

    printf("\t");
  }


  printf("\n"); // Print a newline character at the end

  return 0;
}
