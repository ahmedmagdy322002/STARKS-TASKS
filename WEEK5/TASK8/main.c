#include <stdio.h>

void printArrayReverse(int *arr, int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", *(arr + i));
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements of the array in reverse order:\n");
    printArrayReverse(arr, size);

    return 0;
}
