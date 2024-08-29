// Write the patten programme SQUARE. 
#include <stdio.h>

 void main()
 {
    int a, b, c, d;
    printf("Enter the number of raws : \n");
    scanf(" %d", &a);

    printf("Enter the number of cell : \n");
    scanf(" %d", &b);
    
        for (c = 1; c <= a; c++)
        {
            for (d = 1; d <= b; d++)
                {
                    printf(" * "); 
                }
        printf ("\n");
        }
}   
