// Square root table with formating in terminal
#include <stdio.h>
#include <math.h>

int main()
{
    int i, j;
    float x, y; // for calculation
    
    printf(" Graph ");
    for(i=1 ; i<=9 ; i++)
    {   
        printf("   %d", i);
    }
    printf(" \n");
    printf("-------------------------------------------- \n");

    for (i=1 ; i<=9; i++)
    {
        y = (float)i / 10;
        printf(" %.1f  |", y);
        for(j=1 ; j <=9 ; j++)
        {
            y = (float)i / 10;
            x = sqrt( (y*j) );
            printf(" %.1f", x);
        }
        printf (" \n");
    }
}
