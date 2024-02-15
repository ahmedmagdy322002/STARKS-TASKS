#include <stdio.h>
#include <stdlib.h>

int main()
{
    int class1[10]={0};
    int class2[10]={0};
    int class3[10]={0};

    ///////first class////////////////////////////////

     printf("Enter the grades for the first class :\n\n");
    for (int i = 0; i < 10; i++) {

            printf("The grade for student number %i: ", i);
            scanf("%i", &class1[i]);

                                 }
        int passnumber = 0 ;
        int failnumber = 0 ;
    for (int i = 0; i < 10; i++) {


        if (class1[i]>=50)
               {
                   passnumber+=1;
               }
         else  {
                    failnumber+=1;
               }
                                 }

                printf("\nThe number of passed students: %i\n ", passnumber);
                printf("The number of failed students: %i\n ", failnumber);

             int max = class1[0];

    for (int i = 0; i < 10; i++) {
        if (class1[i] > max) {
            max = class1[i];
        }
    }


    printf("\nThe higest value in the first class: %d\n", max);

    for (int i = 0; i < 10; i++) {
        if (class1[i] < max) {
            max = class1[i];
        }
    }

    printf("\nThe lowest value in the first class: %d\n", max);


        int sum = 0 ;

    for (int i = 0; i < 10; i++) {

              sum +=class1[i];
    }
            float average = 0 ;
            average=sum/10;

    printf("\nThe average value in the first class: %f\n", average);

                    printf("\n");
    ///////first class////////////////////////////////


   ///////second class////////////////////////////////


     printf("Enter the grades for the second class :\n\n");
    for (int i = 0; i < 10; i++) {

            printf("The grade for student number %i: ", i);
            scanf("%i", &class2[i]);

                                 }
        int  passnumber1 = 0 ;
        int failnumber1 = 0 ;
    for (int i = 0; i < 10; i++) {


        if (class2[i]>=50)
               {
                   passnumber1+=1;
               }
         else  {
                    failnumber1+=1;
               }
                                 }

                printf("\nThe number of passed students: %i\n ", passnumber1);
                printf("The number of failed students: %i\n ", failnumber1);

            // int max = class2[0];

    for (int i = 0; i < 10; i++) {
        if (class2[i] > max) {
            max = class2[i];
        }
    }


    printf("\nThe highest value in the second class: %d\n", max);

    for (int i = 0; i < 10; i++) {
        if (class2[i] < max) {
            max = class2[i];
        }
    }

    printf("\nThe lowest value in the second class: %d\n", max);


        int sum2 = 0 ;

    for (int i = 0; i < 10; i++) {

              sum2 +=class2[i];
    }
          float average2 = 0 ;
            average2=sum2/10;

    printf("\nThe average value in the second class: %f\n", average2);

                    printf("\n");
   ///////second class////////////////////////////////


   ///////third class////////////////////////////////

     printf("Enter the grades for the third class :\n\n");
    for (int i = 0; i < 10; i++) {

            printf("The grade for student number %i: ", i);
            scanf("%i", &class3[i]);

                                 }
        int passnumber2 = 0 ;
        int failnumber2 = 0 ;
    for (int i = 0; i < 10; i++) {


        if (class3[i]>=50)
               {
                   passnumber2+=1;
               }
         else  {
                    failnumber2+=1;
               }
                                 }

                printf("\nThe number of passed students: %i\n ", passnumber2);
                printf("The number of failed students: %i\n ", failnumber2);

            // int max = class3[0];

    for (int i = 0; i < 10; i++) {
        if (class3[i] > max) {
            max = class3[i];
        }
    }


    printf("\nThe highest value in the third class: %d\n", max);

    for (int i = 0; i < 10; i++) {
        if (class3[i] < max) {
            max = class3[i];
        }
    }

    printf("\nThe lowest value in the third class: %d\n", max);


       int sum3 = 0 ;

    for (int i = 0; i < 10; i++) {

              sum3 +=class3[i];
    }
            float average3 = 0 ;
            average3=sum3/10;

    printf("\nThe average value in the third class: %f\n", average3);

                    printf("\n");
   ///////third class////////////////////////////////
    return 0;
}
