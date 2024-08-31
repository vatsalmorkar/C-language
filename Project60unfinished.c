#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char a[5];
    int x, y, z;
    int new_a, count1=0;
        while(1)
        {
            printf(" Enter The value between 0 to 100 :");
            scanf(" %5s", a);

            new_a = atoi(a);

            if(strcmp(a, "exit") == 0 || strcmp(a, "EXIT") == 0)
            {
                break;
            }
            if (new_a < 0 || new_a >100)
            {
                printf(" Enter Valid Input \n");
            }
            else
            {
                //input[new_a] = 
                count1++;
            }
        }
            printf(" Your total imputs are : %d", count1);

            x = new_a%2;
            y = new_a%3;
            z = new_a%4;

            if (x == 0 && y == 0 && z != 0)
            {
            printf("This number is divisible by 6 but not divisible by 4 : %d \n", new_a);
            }

    
}