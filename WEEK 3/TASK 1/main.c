#include <stdio.h>
#include <stdlib.h>

#include "TASK 1.h"

int main()
{
    int NUMBER = 0;
    printf("ENTER THE DIGIT : ");
    scanf("%d",&NUMBER);
    int output =digits_reversed(NUMBER);
    printf("digits reversed:",output);

    return 0;
}

