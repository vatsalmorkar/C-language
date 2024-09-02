//Write a program to print a table of sin and cos function for the interval from 0 to 180 degress in increments of 15 a shown here

#include <stdio.h>
#include <math.h>

int main()
{
    int a, i;
    float x, y; // for store the value
    printf("Enter the values for degree you want the table : ");
    scanf(" %d", &a);

    printf(" x (Degress) \t sin (x) \t cos (x) \n ");

    for (i=0 ; i<=a ; i++)
    {
        x = sin (i);
        y = cos (i);

        printf("%d \t %2.2f \t %2.2f \n",i, x, y);
    }

}
