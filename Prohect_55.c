// Triangular with floating value
#include <stdio.h>

int main()
{
    int i, j;
    float z = 0.1, g;

    for (i = 1; i <= 9; i++)
    {
        for (j = 1 ; j <= i ; j ++)
        {
            printf(" %.1f", z);
            g = z + 0.1;
            z = g;
        }
        printf(" \n");
    }
}
