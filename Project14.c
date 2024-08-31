//Write a program to determine and print the sum of the following harmonic series for a given value of n: 1+1/2+1/3+………………+1/n

#include<stdio.h>

int main()
{
    int n, a;
    float x;
    
    printf ("Enter the value for n = ");
    scanf (" %d", &n);

    for (a = 1; a<=n; a++)
    {
        x = x + (1.0/a);
    }
    printf ("Ans =  %.2f", x);
}