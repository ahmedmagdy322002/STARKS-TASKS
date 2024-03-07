#include <stdio.h>
#include "functions.h"

int main() {
    int mode;

    printf("Welcome to the Breakfast Machine!\n\n");
    printf("Select mode:\n");
    printf("1. Admin mode\n");
    printf("2. User mode\n");
    printf("Enter your choice: ");
    scanf("%d", &mode);

    if (mode == 1) {
        adminMode();
    } else if (mode == 2) {
        userMode();
    } else {
        printf("Invalid choice. Exiting...\n");
    }

    return 0;
}



