#include <stdio.h>
#include <string.h>

int main() {
    // Assume a registered user with ID "user123" and password "pass123"
    char correctID[] = "ahmed322002";
    char correctPassword[] = "electrical-engineer";

    char enteredID[20];
    char enteredPassword[20];

    printf("Enter your ID: ");
    scanf("%s", enteredID);

    // Check if the entered ID is correct
    if (strcmp(enteredID, correctID) == 0) {
        for (int tries = 0; tries < 3; tries++) {
            printf("Enter your password (Attempt %d of 3): ", tries + 1);
            scanf("%s", enteredPassword);

            // Check if the entered password is correct
            if (strcmp(enteredPassword, correctPassword) == 0) {
                printf("Welcome, %s!\n", enteredID);
                return 0; // Correct password, exit program
            } else {
                printf("Incorrect password. Try again.\n");
            }
        }

        printf("No more tries. Account locked.\n");
    } else {
        printf("You are not registered.\n");
    }

    return 0;
}

