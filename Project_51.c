//Sum of the numbers that greater than 100 but less than 200 and the number must be divisible by 7.
#include<stdio.h>

int main()
{
    int a,y;
    int x=0; 

    printf("Type 0 after enter all the numbers to exit \n");
    while(1)
    {
        printf(" Enter the numbers : ");
        scanf (" %d", &a);

        y = a%7;
        
        if( a == 0)
        {
            break;
        }
        
        else if(a > 100 && a < 200 && y == 0 )
        {
            x = x + a;
        }
    }
    printf(" \n Sum of the numbers that greater than 100 but less than 200 and the number must be divisible by 7 is = %d", x);
}
