//EXERCISE NO.3.18: Write a program to compute the values of square-roots and squares of the number 0 to 100 in steps 10 print the output in a tabular form as shown below.
//-----------------------------------------------------------------------------------------------number                               Square-root                                     square
//0                                            0                                                         0
//100                                       10                                                        10000

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

    for (i=0; i <= a; i++)
        {
            x = sqrt(i);
            y = i * i;
            printf(" %d \t %f \t %d \n", i, x, y);
        }
}
