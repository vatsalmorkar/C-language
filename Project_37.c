#include<stdio.h>

int main()
{
    float a;
    int i, j;
    
    printf(" \n Press 0 to Exit the program \n");
    while(1)
    {
        printf("\n Enter The bar chart value you want a graph for : ");
        scanf( " %f", &a);

        if( a == 0)
        {
            break;
        }
        for(i=1 ; i<=3; i++)
        {

            if(i == 2)
            {
                for(j=1 ; j <=a ; j++)
                {
                    printf("*");
                }
                printf(" [%.1f] ", a);
            }
            else
            {
                for(j=1 ; j <=a ; j++)
                {
                    printf("*");
                }
            }
            printf(" \n");
        }
    }
}
