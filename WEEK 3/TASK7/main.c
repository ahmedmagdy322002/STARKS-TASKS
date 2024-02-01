#include <stdio.h>

#include "TASK7.h"


int main() {
    int average;

    printf("Enter the student's average: ");
    scanf("%d", &average);

    int points = qualityPoints(average);

    printf("Quality Points: %d\n", points);

    return 0;
}
