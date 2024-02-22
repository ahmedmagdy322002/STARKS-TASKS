#include <stdio.h>
#include <stdlib.h>
int fun(int *nl , int *n2)
{
    (*n1)++;
    (*n2)+=20;
    printf(" Inside function *n1 = %d, *n2 = %d\n", *nl, *n2);
}
int main()
{
    int a=5;
    int b=6;
    int *p1 =&a;
    int *p2 =&b;
printf(" Before calling the function, a = %d and b = %d\n", a, b);
fun(&a,&b);
printf(" after calling the function, a = %d and b = %d\n", a, b);
 return 0;
}


