#include<stdio.h>

int main()
{
    int a,y;
    int x=0; // to store the value

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
            //printf(" %d \n", a);
            x = x + a;
        }
    }
    printf(" Your final input is = %d", x);
}