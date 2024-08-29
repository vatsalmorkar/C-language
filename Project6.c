// Write the patten programme TRIANGULAR. 
#include <stdio.h>

 void main()
 {
    int a, b, i, j;
    printf("Enter the number of raws : \n");
    scanf(" %d", &a);

    printf("Enter the number of cell : \n");
    scanf(" %d", &b);

        for (i = 1; i <= a; i++)
        {
            for (j = 1; j <= i; j++)
                {
                    printf(" * "); 
                }
        printf ("\n");
        } 
 }   