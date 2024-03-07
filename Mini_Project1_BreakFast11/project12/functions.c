#include <stdio.h>
#include <string.h>
#include "functions.h"

void viewItems(struct Item items[], int itemCount) {
    printf("\nItems in the machine:\n");
    for (int i = 0; i < itemCount; i++) {
        printf("%d. %s - Quantity: %d\n", i + 1, items[i].name, items[i].quantity);
    }
}

void editQuantity(struct Item items[], int itemCount) {
    int itemIndex, newQuantity;
    printf("\nEnter the item index to edit: ");
    scanf("%d", &itemIndex);

    if (itemIndex >= 1 && itemIndex <= itemCount) {
        printf("Enter the new quantity: ");
        scanf("%d", &newQuantity);

        items[itemIndex - 1].quantity = newQuantity;
        printf("Quantity updated successfully.\n");
    } else {
        printf("Invalid item index. Please try again.\n");
    }
}

void adminMode() {
    char username[20];
    char password[20];

    printf("Admin mode\n");
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, ADMIN_USERNAME) == 0 && strcmp(password, ADMIN_PASSWORD) == 0) {
        printf("Admin login successful.\n\n");
        struct Item items[MAX_ITEMS] = {
            {"Molto Snack", 10},
            {"Biscuits", 5},
            {"Bakery Items", 8},
            {"Cola", 15},
            {"Miranda", 12},
            {"Tea", 20},
            {"Coffee", 10},
            {"Hot Mint Tea", 7},
            {"Strawberry Coffee", 3},
            {"Mint Flavor", 0}
        };

        int choice;
        printf("Admin Mode\n");

        do {
            printf("\nSelect an option:\n");
            printf("1. View items and their quantities\n");
            printf("2. Edit item quantities\n");
            printf("3. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    viewItems(items, MAX_ITEMS);
                    break;
                case 2:
                    editQuantity(items, MAX_ITEMS);
                    break;
                case 3:
                    printf("Exiting...\n");
                    break;
                default:
                    printf("Invalid choice. Please try again.\n");
                    break;
            }
        } while (choice != 3);
    } else {
        printf("Invalid username or password. Exiting...\n");
    }
}

void userMode() {
    int choice;
    int isSubscriber;
    char username[20];
    char password[20];

    printf("User mode\n");
    printf("Select user type:\n");
    printf("1. Subscriber\n");
    printf("2. Guest\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        isSubscriber = 1;
    } else if (choice == 2) {
        isSubscriber = 0;
    } else {
        printf("Invalid choice. Exiting...\n");
        return;
    }

    if (isSubscriber) {
        printf("Enter username: ");
        scanf("%s", username);
        printf("Enter password: ");
        scanf("%s", password);

        struct Subscriber subscriber;
        if (strcmp(username, SUBSCRIBER_USERNAME) == 0 && strcmp(password, SUBSCRIBER_PASSWORD) == 0) {
            printf("Subscriber login successful.\n\n");
            strcpy(subscriber.username, username);
            strcpy(subscriber.password, password);
            subscriber.balance = SUBSCRIBER_BALANCE;
            displayMenu(&subscriber);
        } else {
            printf("Invalid username or password. Exiting...\n");
        }
    } else {
        printf("Guest login successful.\n");
        displayMenu(NULL);
    }
}

void displayMenu(struct Subscriber* subscriber) {
    printf("Breakfast Machine Menu:\n");
    printf("1. Molto Snack - $2.50\n");
    printf("2. Biscuits - $1.50\n");
    printf("3. Bakery Items - $3.00\n");
    printf("4. Cola - $1.75\n");
    printf("5. Miranda - $1.80\n");
    printf("6. Tea - $1.25\n");
    printf("7. Coffee - $2.00\n");
    printf("8. Hot Mint Tea - $2.50\n");
    printf("9. Strawberry Coffee - $2.75\n");
    printf("Flavors for Hot Drinks:\n");
    printf("10. Mint Flavor - $0.50\n");
    printf("11. Strawberry Flavor - $0.75\n");
    printf("12. Exit\n");

    int choice;
    float totalAmount = 0.0;

    do {
        printf("\nEnter your choice (12 to exit): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                totalAmount += 2.50;
                break;
            case 2:
                totalAmount += 1.50;
                break;
            case 3:
                totalAmount += 3.00;
                break;
            case 4:
                totalAmount += 1.75;
                break;
            case 5:
                totalAmount += 1.80;
                break;
            case 6:
                totalAmount += 1.25;
                break;
            case 7:
                totalAmount += 2.00;
                break;
            case 8:
                totalAmount += 2.50;
                break;
            case 9:
                totalAmount += 2.75;
                break;
            case 10:
                totalAmount += 0.50;
                break;
            case 11:
                totalAmount += 0.75;
                break;
            case 12:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 12);

    if (subscriber != NULL) {
        if (subscriber->balance >= totalAmount) {
            printf("Payment successful. Enjoy your meal!\n");
            subscriber->balance -= totalAmount;
            printf("Remaining balance: $%.2f\n", subscriber->balance);
        } else {
            printf("Insufficient balance. Please add funds.\n");
        }
    } else {
        printf("Guest payment successful. Enjoy your meal!\n");
    }
}

