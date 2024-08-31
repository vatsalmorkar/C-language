// Easy Exercise

#include<stdio.h>

int main()
{
    int x = 5678;
    int y;

    y = x % 100000;
    printf(" %d \n", y);

    y = x % 10000;
    printf(" %d \n", y);

    y = x % 1000;
    printf(" %d \n", y);

    y = x % 100;
    printf(" %d \n", y);

    y = x % 10;
    printf(" %d \n", y);

}