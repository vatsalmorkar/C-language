// print the min value in the program

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter value for a : "); scanf(" %d", &a);
    printf("Enter value for b : "); scanf(" %d", &b);
    printf("Enter value for c : "); scanf(" %d", &c);

    if (a >= b && b <= c)
    printf(" %d", b);

    else if (b >= c && c <= a)
    printf(" %d", c);

    else if (b >= a && a <= c)
    printf(" %d",a);

}