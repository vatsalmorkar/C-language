#include <stdio.h>
#include <math.h>

int main()
{
    int i, j;
    float x, y; // for calculation
    for (i = 1 ; i<=9; i++)
    {
        for(j = 1 ; j <=9 ; j++)
        {
            y = (float)i / 10;
            x = sqrt( (y*j) );
            printf(" %.1f", x);
        }
        printf (" \n");
    }
}