#include <stdio.h>

#include "TASK4.c"


int main() {
    unsigned int number;

    printf("Enter an positive integer: ");
    scanf("%d", &number);
	PerfectNumberCheck(number);

	/*for (int i=1; i<=100; i++){
		PerfectNumberCheck(i);
	}*/
    return 0;
}

