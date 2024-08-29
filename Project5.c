// Write the patten programme REVERSE TRIIGULAR. 
#include <stdio.h>

 int main()
 {
    int i,a, b, j;
    printf("Enter the number of raws :");
    scanf(" %d", &a);
    //printf("Your input is = %d \n", a);

    printf("Enter the number of cell :");
    scanf(" %d", &b);
    //printf("Your input is = %d \n", b);

    for (i=1; i<=a; i++)
    {
        for (j=1; j<=b; j++)
            {
                if (j >= i)
                {
                printf (" *");
                }
                else
                {
                printf ("  ");        
                }
            }
        printf (" \n");

    }
 }   