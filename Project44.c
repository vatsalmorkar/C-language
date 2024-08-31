//counts the number of boys whose weight is less then 50 and height is greather than 180 cm also print the totel number of boys

#include <stdio.h>

int main()
{
    int a, b;
    int count1=0, count2=0; // for store the calculation storage
    
    printf(" \n type 0 to exit the program \n");
    while(1)
    {
        printf(" Enter height in centimeters :  \n");
        scanf( " %d", &a);
        printf(" Enter weight in kilogramns :  \n");
        scanf(" %d", &b);

        if( a == 0 && b == 0)
        {
            break;
        }
        else if ( b<= 50 && a >=180)
        {
            count1++;
        }
        count2++;
    }
        printf(" Total boys : %d \n", count2);
        printf(" Selcted boys : %d \n", count1);
}