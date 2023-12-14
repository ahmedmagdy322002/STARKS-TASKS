#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch ;

    printf("Enter some character : ");
    scanf("%c", &ch);

    int asciivalue = (int)ch;// casting process
    printf("The equivlant Ascii of %c is %i\n",ch,asciivalue );

    char next_char = (char)(asciivalue+1);
    printf("the next character : %c\n ",next_char);

    char previous_char = (char)(asciivalue-1);
    printf("the previous character : %c ",previous_char);

    return 0;
}
