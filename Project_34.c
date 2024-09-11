// conversion program meter to foot foor to meter
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

    printf(" \n SELECT WHAT YOU WANT TO CONVERT \n");
    printf(" Press 0 TO EXIT \n");
    
    while(1)
    {
        printf(" \n Press 1 METRE TO FOOT \n");
        printf(" Press 2 FOOT TO METRE \n");
        scanf( " %d", &b);
            if (b == 0)
            {
                break;
            }
            else if (b == 1)
            {
                printf (" Enter the vlaue you want to convert : ");
                scanf(" %f", &a);
                x = func1 (a);
                printf( " %2.2f \n", x);
            }
            else if (b == 2)
            {
                printf (" Enter the vlaue you want to convert : ");
                scanf(" %f", &a);
                x = func2 (a);
                printf( " %2.2f \n", x);
            }
            else
            {
                printf(" Invelid Input \n");
            }
    }
    
}
