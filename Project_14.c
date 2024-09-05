//Write a program to read the prise of an item in decimal form (  like 15.95 ) and print the output in paisa ( like 1595 paisa) .

#include<stdio.h>

int main()
{
    float x;
    int y;

    printf("Enter value to of rupees to convert in paisa : ");
    scanf(" %f", &x);
    //printf("Your Input = %f", x);

    y = (int) (x * 100);

    printf ("paisa =  %d", y);

}
