// Print digits - last digits

#include<stdio.h>

int main()
{
    int x = 56781;
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
