#include<stdio.h>

int main()
{
    float a;
    int i;
    
    printf(" \n Press 0 to Exit the program \n");
    while(1)
    {
        printf("\n Enter The bar chart value you want a graph for : \n ");
        scanf( " %f", &a);

        if( a == 0)
        {
            break;
        }

        for(i=1 ; i <=a ; i++)
        {
            printf("*");
        }
    }
}