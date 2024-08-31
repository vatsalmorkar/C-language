#include<stdio.h>
#include<ctype.h>
#include<string.h>

float func1 (float a) // For metre to foot
{return (a * 3.280);}
float func2 (float a) // foot to metre
{return (a * 0.3048);}

int main()
{
    int b;
    float a, x;
    
    while(1)
    {
        printf(" \n SELECT WHAT YOU WANT TO CONVERT \n");
        printf(" \n Press 1 METRE TO FOOT \n");
        printf(" Press 2 FOOT TO METRE \n");
        printf(" Press 0 TO EXIT \n");
        scanf( " %d", &b);
            if ( b == 0)
            {
                break;
            }
        printf (" Enter the vlaue you want to convert : ");
        scanf(" %f", &a);
            if (b == 1)
            {
                x = func1 (a);
                printf( " %2.2f", x);
            }
            else if (b == 2)
            {
                x = func2 (a);
                printf( " %2.2f", x);
            }
    }
    
}