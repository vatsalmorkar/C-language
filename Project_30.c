// Write a program that determines whether a given integier is odd or even and display the number and discription

#include <stdio.h>

int main()
{
    int a;
    float x; //to check the value
    
    while(1)
    {
        printf(" Enter the value to check : ");
        scanf(" %d", &a);

        x = a%2;
        if ( a == 0)
        {
            printf(" bye ");
            break;
        }    
        else if (x == 0)
        {
            printf(" EVEN \n");
        }
        else if ( x != 0)
        {
            printf(" ODD \n");
        }
    }
}
