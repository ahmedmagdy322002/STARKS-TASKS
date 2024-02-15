#include <stdio.h>
#include <stdlib.h>

int main()
{

    int watched [10] = {0};
    int numbers   ;
    printf("Enter the number\n");
    scanf("%i",&numbers);

      int reminder  ;
        while (numbers>0)
        {
            reminder=numbers%10;
            if (watched [reminder]==1)
            {
                break;
            }
                watched [reminder]=1;
                    numbers=numbers/10;
        }
            if (numbers>0)
               {
                   printf("yes");
               }
            else
                {
                    printf("no");
                }

    return 0;
}
