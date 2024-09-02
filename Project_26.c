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
            printf(" %d is in multification of %d ", m, n);
        }
        else
        {
            printf(" %d is not multification of %d ", m, n);
        }

}
