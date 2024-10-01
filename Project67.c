#include <stdio.h>
int main()

{
    int i, j;
    
    for (i=1 ; i<=10 ; i++)
    {
        if(i==1)
        {
            for (j=1 ; j<=10 ; j++)
            {
                printf(" * ");
            }
        }
        if(i==10)
        {
            for (j=1 ; j<=10 ; j++)
            {
                printf(" * ");
            }
        }
        for (j=1 ; j<=i ; j++)
        {
            if (i==j)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        /*for (j=10 ; j>=i ; j--)
        {
            if (i==j)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }*/
    printf(" \n");
    }

}
