// Write a program that prints the even numbers from given range

#include <stdio.h>

int main()
{
    int a, b;
    float x;
    int i; //for running loop
    printf(" \n Enter the range \n ");
    printf (" \n Enter the value start value : ");
    scanf (" %d", &a);
    printf(" \n Enter the value end value : ");
    scanf (" %d", &b);
    
    for (i=a ; i <= b ; i++)
    {
        x = i % 2 ;
        if (x == 0)
        {
        printf (" %d \n", i);
        }
    }
}

