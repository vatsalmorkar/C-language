//The number is prime or not prime from the range given by user
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        char a[5];
        int p; //converter
        int x; //calculation
        int i; // for loop
        int count = 0; // logic
        printf(" Enter value to check : ");
        scanf (" %5s", a);

        if(strcmp(a, "exit")==0 || strcmp(a, "EXIT")==0)
        {
            break;
        }
        else
        {
            p = atoi (a);
            for(i = 1 ; i<=p ; i++)
            {
                x = p%i;
                if( x == 0)
                {
                    count ++;
                }
            }
            if(count == 2)
            {
                printf(" %d is prime number", p);
            }
            else
            {
                printf(" %d is not prime number", p);
            }
        }
    }    

}
