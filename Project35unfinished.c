// factorial calculation program. n! = n * (n-1) * (n-2) until (n-n) happen

/*#include<stdio.h>

int main()
{
    int n, i;
    int x = 1;
    printf(" Enter The number :");
    scanf(" %d", &n);

    for( i = n ; i >= 1 ; i --)
    {
        x = x * i;
    }

    printf(" %d \n", x);
    
}*/

#include<stdio.h>

int func1( int n )
{
    int x = 1;
    x = x * (n-1);
    return(x);
}

int main()
{
    int a, b;
    int i =1;
    printf(" Enter the number : ");
    scanf(" %d", &a);

        while (i <= a )
        {
            b = func1(a);
            i++;
        }

    printf(" ANS = %d", b);
}

 