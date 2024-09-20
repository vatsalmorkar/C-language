// factorial calculation program. n! = n * (n-1) * (n-2) until (n-n) happen

#include<stdio.h>

int main()
{
    int n;
    int x = 1;
    printf(" Enter The number :");
    scanf(" %d", &n);

    for( n ; n >= 1 ; n--)
    {
        x = x * n;
    }

    printf(" %d \n", x);
    
}
