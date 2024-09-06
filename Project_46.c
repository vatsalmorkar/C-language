// To find the min max numberof given numbers and calculate the average and range of the value 

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    printf(" \n Enter 0 after entering all the value \n");
    
    char x[5];
    float a; //converter
    long int min=999999, max=-999999; // for Calculations
    
    while(1)
    {
        printf(" Enter The Value : ");
        scanf(" %5s", x);

        if(strcmp(x,"exit")==0)
        {
            printf(" Exiting ... \n");
            break;
        }
        else
        {
            a = atoi(x);

            if(a < min)
            {
                min = a;
            }
            if (a > max)
            {
                max = a;
            }
        }
        
    }
    printf(" Min Value is %ld \n", min);
    printf(" Max Value is %ld", max);
}
