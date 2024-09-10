// square table of 1 to 10 with formating
#include<stdio.h>

int main()
{
    int x=1;
    int a; // to store tha value  - logic
    int i=1; // for loop
    printf(" Table");
    for( i=1 ; i<=10 ; i++)
    {
        printf("   %d", i);
    }
    printf("\n ---------------------------------------------------- \n");
    do
    {
        printf(" %d |", x);
        int i = 1;
        do
        {
            a = x * i;
            printf("   %d", a);
            i++;
        } while (i <= 10);
        
        x++;
        printf(" \n");
    }
    while( x <= 10);
    return 0;
}
