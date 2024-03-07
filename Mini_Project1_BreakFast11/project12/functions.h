
#ifndef FILE_H
#define FILE_H

// Define constants
#define ADMIN_USERNAME "ahmed"
#define ADMIN_PASSWORD "ahmed123"
#define SUBSCRIBER_USERNAME "ahmed2002"
#define SUBSCRIBER_PASSWORD "ahmed2002123"
#define SUBSCRIBER_BALANCE 100.0
#define MAX_ITEMS 10

// Structure to represent an item
struct Item {
    char name[50];
    int quantity;
};

// Structure to represent a subscriber
struct Subscriber {
    char username[20];
    char password[20];
    float balance;
};

// Function prototypes
void adminMode();
void userMode();
void viewItems(struct Item items[], int itemCount);
void editQuantity(struct Item items[], int itemCount);
void displayMenu(struct Subscriber* subscriber);

#endif
