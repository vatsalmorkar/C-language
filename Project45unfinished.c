// power series formula e^x = 1 + x + x2/2! + x2/3! + xn/n!, 0<x<1

#include <stdio.h>

int main()
{
    float x; // between 0<x<1
    int n; // to howmuah series you want
    int i; // for runniing of for loop
    float a; // to store the value of x2
    float b; // to store the value of 1 + x
    float c = 1; // to store the final value of the formula
    
    printf(" \n This program is for caculation of power series \n");
    
    s1 :
    printf(" Enter the e^x value between 0 to 1 : \n");
    scanf(" %f", &x);

    printf(" Enter the n value for repetation : \n");
    scanf(" %f", &n);
    if( x <= 0 || x >= 1)
    {
        printf("error x value must be between 0 to 1 \n");
        goto s1;
    }
    else
    {
        a = x * x;

        for ( i=2 ; i<=n ; i++ )
        {
            c = c + (a/i);
        }

        b = 1 + x + c;

        printf(" e^x = %f", b);
    }
}