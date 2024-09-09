//Use of the switch statement
#include <stdio.h>

int main()
{
    
    int x, y;
        printf("Type 0 to exit");
        step1:
        printf(" Enter the number you wanna check : ");
        scanf(" %d", &x);

        y = x%2;

        switch (y)
        {
            case 1:  
                printf( " the number is odd ");
                goto step1;
            case 0:
                printf ("the number is even");
                goto step1;
            default :
                printf(" invelid input");
                break;
        }

}
