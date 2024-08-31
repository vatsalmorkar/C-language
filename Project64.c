// Calculate Average

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, a=0;
    int i; // for running loop
    int p, num=0; // for calculation purpose

    printf(" Enter Numbers rane you want to calculate average  : ");
    scanf(" %d", &x);
    scanf(" %d", &y);

    for(  ; x<= y ; x++)
    {
        if(x > 0)
        {
            //printf(" %d", x);
            a = a + x;
            num++; 
        }
    }
    //printf(" %d", a);
    //printf(" %d", num);
    p = a / num;
    printf(" Average = %d", p);
}
