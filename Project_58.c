// calculation from many numbers hoe many are divisible by 6 but not divisible nt 4
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char a[5];
    int x, y, z;
    int new_a, count1=0, count2=0;
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
                x = new_a%2;
                y = new_a%3;
                z = new_a%4;

                if (x == 0 && y == 0 && z != 0)
                {
                //printf("This number is divisible by 6 but not divisible by 4 : %d \n", new_a);
                count2++;
                } 
                count1++;
            }
        }
            printf(" Your total imputs are : %d \n", count1);
            printf(" \n Your total numbers which are divisible ny 6 not divisible by 4 are : %d", count2);
    
}
