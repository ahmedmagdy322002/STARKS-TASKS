
#include <stdio.h>

int main()
{
    int num ;
    char character ;
    float nmm;
    printf("Enter an integer value ");
    scanf("%i",&num);

    printf("Enter a char value ");
    scanf(" %c",&character);

    printf("Enter an float value ");
    scanf("%f",&nmm);

    printf("The integer value = %i !\n", num);
    printf("The char value = %c !\n", character);
    printf("The float value = %f !\n", nmm);
    return 0;

}
