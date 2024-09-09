//count the numbers which is divisible by 6 but not divisible by 4 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int a; // for running the loop
    int total_a = 0;
    printf(" \n Enter The value between i and j : \n i = \n");
    scanf(" %d", &i);
    printf(" j =", j);
    scanf(" %d", &j);

    for( a = i ; a <= j; a++)
    {
        int x, y, z;

        x = a%2;
        y = a%3;
        z = a%4;

        if (x == 0 && y == 0 && z != 0)
        {
            printf("This number is divisible by 6 but not divisible by 4 : %d \n", a);
        }
        total_a++;
    }
    printf("total inputs are %d", total_a);
}
