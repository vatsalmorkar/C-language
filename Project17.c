// Write a program that requires two float type numbers from the user and then divides the number by the second and display the result along with the numbers

#include <stdio.h>

main()
{
    float a, b, x;

    printf ("Enter value of a : ");
    scanf (" %f", &a);

    printf ("Enter value of b : ");
    scanf (" %f", &b);
    
    x = a / b;

    printf (" %f", x);

}