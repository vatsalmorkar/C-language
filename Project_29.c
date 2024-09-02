//Write a program to compute the values of square-roots and squares of the number in table form


#include <stdio.h>
#include <math.h>

int main()
{
    int a, i;
    float x; // for store sqrt values
    int y; //for store squares values

    printf("Enter the vlue you want square and squar roots : \n");
    scanf(" %d", &a);

    printf("Number \t Square Root \t Square \n");
    printf("---------------------------------");

    for (i=0; i <= a; i++)
        {
            x = sqrt(i);
            y = i * i;
            printf(" %d \t %f \t %d \n", i, x, y);
        }
    printf("---------------------------------");
}
