// square table of 1 to 10
#include<stdio.h>

int main()
{
    int x=1;
    int a; // to store tha value  - logic
    int i=1; // for loop
    do
    {
        int i = 1;
        do
        {
            a = x * i;
            printf(" %d", a);
            i++;
        } while (i <= 10);
        
        x++;
        printf(" \n");
    }
    while( x <= 10);
    return 0;
}