// Input from the user a, b, c, d and give the ratio of (a + b) / (c - d)
#include <stdio.h>

int main()
{
    float a, b, c, d;
    float x, y, z; // Stor the value
    printf(" Enter the value of a b c d :  \n");
    scanf(" %f %f %f %f", &a, &b, &c, &d);

    x = a + b;
    y = c - d;

    if(y == 0)
    {
        printf(" c - d = 0 so ratio can't be given  \n");
    }
    else
    {
        z = x / y;
        printf(" ratio = %f \n", z);
    }

    
}