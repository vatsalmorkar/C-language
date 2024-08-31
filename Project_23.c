//Write a program to read four digit integer and print the sum of its digits
#include<stdio.h>

int main()
{
    int a, v, x, y, z, w;
    int b, c, d;   // other veriable for store the value

    printf("Enter Value of 4 Digits : ");
    scanf(" %d", &a);
    printf(" Entered Value %d \n", a);

            v = a%10;
        printf(" v =  %d \n", v);
            
            b = a/10;
            x = b%10;
        printf(" x =  %d \n", x);
        
            c = a/100;
            y = c%10;
        printf(" y =  %d \n", y);

            d = a/1000;
            z = d;
            //z = b%10;
        printf(" z =  %d \n", z);

    w = v + x + y + z;

    printf(" %d", w);
}
