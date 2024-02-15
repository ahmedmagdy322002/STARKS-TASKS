#include <stdio.h>

int main() {
            int size ;
    printf("Enter the size of the array : ");
        scanf("%i",&size);
                int array [size];


    printf("Enter the elements of the array :\n ");
        for (int i ; i<size ; i++)
        {
            scanf("%i",&array[i]);
        }


    printf("Unique elements in the array: ");
    for (int i = 0; i < size; i++) {

        int isUnique = 1;
            for (int j = 0; j < i; j++) {

                if (array[i] == array[j]) {
                    isUnique = 0; // Not unique
                    break;
                                          }
                                        }
                if (isUnique) {
            printf("%d ", array[i]);
                              }

                                    }

    return 0;
}
