//write a program that reads a floating-point number and then displays right-most digit of the integral part of the number.

#include<stdio.h>

int main()
{
    float x;
    int y, z;

    printf ("Enter float Value for x : ");
    scanf (" %f", &x);

    y = (int) x;

    z = y % 10;

    printf (" Your right most value part is = %d", z);

}