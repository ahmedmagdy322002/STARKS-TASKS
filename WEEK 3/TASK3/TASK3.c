
#include"TASK3.h"

void decimalToBinary(int decimal) {
    int binary = 0, placeValue = 1;

    while (decimal > 0) {
        binary += (decimal % 2) * placeValue;
        decimal = decimal / 2;
        placeValue *= 10;
    }

    printf("The binary representation is: %d\n", binary);
}
