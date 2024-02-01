#include <stdio.h>
#include <stdlib.h>

 #include "TASK8.h"

int main()
{
    float a ;
    printf("Enter the first number\t");
    scanf("%f",&a);

    float b ;
    printf("Enter the second number\t");
    scanf("%f",&b);

    float c ;
    printf("Enter the third number\t");
    scanf("%f",&c);

    float s =  smallestnum (a, b ,c );

        printf("The smallest number is : %f\n",s);

    return 0;
}
