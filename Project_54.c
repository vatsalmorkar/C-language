// Triangular with continue numbers
#include <stdio.h>

int main()
{
    int i, j;
    int x=1; // for intialize the value
    for (i=1 ; i<=9 ; i++)
    {
        for (j=1 ; j<=i ; j++)
        {
            printf(" %d ", x);
            x++;
        }
        printf(" \n");
    }
}
