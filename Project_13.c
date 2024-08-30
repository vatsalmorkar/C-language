// Convert days in to months

#include <stdio.h>
#include <string.h>

int main ()
{
    int a;
    int x, y;
    char z[3];

    printf("\n Enter days you want to convert in to Years & Months :");
    scanf(" %d", &a);

    printf("\n Is it leap year YES / NO : ");
    scanf(" %3s", z);

    x = a / 30;
    y = a % 30;

    /*if(strcmp(z,"yes")==0 || strcmp(z,"YES")==0)
    {
        if(a > 60)
        {
        printf(" Months = %d \n ", x); 
        printf("Days = %d \n", y-(x/2));
        }

        else if (a < 60)
        {
        printf(" Months = %d \n ", x); 
        printf("Days = %d \n", y-1);
        }

        else if (a = 60)
        {
        printf(" Months = 2 \n ");
        printf(" Days = 0");
        }
    
    }*/
    if (strcmp(z,"no")==0 || strcmp(z,"NO")==0)
    {
        if(a > 59)
        {
        printf(" Months = %d \n ", x); 
        printf("Days = %d \n", y-(x/2));
        }
        else if (a < 59)
        {
        printf(" Months = %d \n ", x); 
        printf("Days = %d \n", y-1);
        }
        else if(a = 59)
        {
        printf(" Months = 2 \n ");
        printf("Days = 0     OR\n");
        printf(" Months = %d \n ", x);  
        }
    }
    else
    {
        printf("\n Invelid input : \n");
    }
    
}
