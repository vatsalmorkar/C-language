// e^ conversion program

#include<stdio.h>

int main()
{
    float a;
    printf(" \n press 0 to exit \n ");
    while(1)
    {
    printf("Enter the value you need to correct in 7 Digits : ");
    scanf(" %f", &a);

    if(a == 0)
    {
        break;
    }
    else
    {
    printf( " %7.2e \n %7.4e \n %7.6e \n", a, a, a);
    }
    }

}
