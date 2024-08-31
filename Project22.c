//Given the values of the variables x,y and z, write a program to rotate their values such that x the value of y, y has the value of z, and z has the value of x
#include<stdio.h>

int main()
{
    int x,y,z, temp;
    printf("Enter Vlues x : \n");
    scanf(" %d", &x);

    printf("Enter Vlues y : \n");
    scanf(" %d", &y);

    printf("Enter Vlues z : \n");
    scanf(" %d", &z);

    temp = x;
    x = y;
    y = z;
    z = temp;
    
    printf(" %d %d %d", x, y, z); 

}