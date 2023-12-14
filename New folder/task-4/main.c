#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    char ope;
    float result ;
    printf(" enter the first number:");
    scanf("%i",&num1);
    printf(" enter the second number:");
    scanf("%i",&num2);
    printf(" enter the operator:");
    scanf(" %c",&ope);
    switch (ope) {
        case '+':
            result=num1+num2;
            printf("The result is : %f\n",result);
            break;
        case '-':
            result=num1-num2;
            printf("The result is : %f\n",result);
            break;
        case '*':
            result=num1*num2;
            printf("The result is : %f\n",result);
            break;
        case '/':
            result=num1/num2;
            printf("The result is : %f\n",result);
            break;
        default:
            printf("Invalid operator Please enter [ +,-,*,/]\n");
    }

    return 0;
}
