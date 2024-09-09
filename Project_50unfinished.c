// find gretest comman dinominator for two use input
#include<stdio.h>

int main()
{
    int a, b;
    int x, y; // for storing the values
    int i=1; // for running the for loop

    printf(" Enter the value 1 :");
    scanf( "%d", &a);
    printf(" Enter the value 2 :");
    scanf("%d", &b);

    while(1)
    {
        x = a * i;
        y = b * i;
        if (x == y)
        {
            printf(" Value %d = ", x);
            break;
        }
        else
        {
            i++;
        }
    }

}
