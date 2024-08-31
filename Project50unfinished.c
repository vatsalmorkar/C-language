// To find the min max numberof given numbers and calculate the average and range of the value 

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    printf(" \n Enter 0 after entering all the value \n");
    
    char x[5];
    float a; //converter
    float min=0, max=0; // for Calculations
    
    while(1)
    {
        printf(" Enter The Value : ");
        scanf(" %f", &x);

        if(strcmp(x,"exit")==0)
        {
            printf(" Exiting ... \n");
            break;
        }
        else
        {
            a = atoi(x);

            if(a>0 && a < min)
            {
                min = a;
            }
            if (a > max)
            {
                max = a;
            }
        }
        
    }
    printf(" Min Value is %.2f \n \n", min);
    printf(" Max Value is %.2f", max);
}