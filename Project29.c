// The cost of one type of mobile service is rs. 250 plus rs 1.25 for each call made over and above 100 calls. write a program to read customer codes and calls made and print the bill for each customer

#include<stdio.h>

int main()
{
    #define SERVICE_COST 250
    #define EXTRA_CHARGE 1.25

    int a; // use for how many calls it performed
    float b, c; // use for the final bill formula

    printf(" How many calls the person made : ");
    scanf(" %d", &a);

    if (a == 0)
        {
            printf(" You have made no calls");
        }
    else if(a <= 100)
        {
            b = SERVICE_COST;
            printf(" %f", b);
        }
    else if(a > 0)
        {
            c = SERVICE_COST + EXTRA_CHARGE * (a - 100);
            printf(" %2.2f", c);
        }


}