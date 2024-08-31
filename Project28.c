// Write a program to read two values m and n and to decide and print whether m is multiple of n.

#include<stdio.h>

int main()
{   
    int m, n;
    int a; // For Storage

        printf(" Enter Value 1 : "); scanf(" %d", &m);
        printf(" Enter Value 2 : "); scanf(" %d", &n);

        a = m%n;

        if(a == 0)
        {
            printf(" The value 2 is in multification of value 1");
        }
        else
        {
            printf(" it is not in multification");
        }

}