// table of bionical coefficient
#include <stdio.h>

// function for factorial calculation
int func1 (int m);

int main()
{
    int m, x;
    int a, b, c, p; // for storing the factorial values
    int i, j; // for running loop

    printf(" Enter the value for x :");
    scanf(" %d", &x);
    printf(" Enter the value for m :");
    scanf(" %d", &m);

    printf("mx");
    for(i=0 ; i<=m ; i++)
    {
        printf(" %d", i);
    }
    printf(" \n ---------------------------------- \n");
    if(m < x)
    {
        printf(" m is greater than x program can't run further");
    }
    else
    {
        //factorial calculation for m

        for( i=0 ; i<=m ; i++)
        {
            printf(" %d", i);
            for(j=0 ; j<=i; j++)
            {
                a = func1 (i);
                b = func1 (i-j);
                c = func1 (j);

                if(b > 0 && c > 0)
                {
                    p = a / (b*c);
                    printf(" %d",p);
                }
            }
            printf(" \n");
        }
    printf(" ---------------------------------- \n");    
    }
}

// user define function for fractorial calculations
int func1 (int m)
{
    int i; // for running loop
    int a=1; // for storing the value
    
    for(i=m ; i>=1 ; i--)
    {
        a = a*i;
    }
    //printf(" %d", a);
    return(a);
}   



