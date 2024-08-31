// Calculate Average
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char x[5];
    int p, num=0, a=0, z; // for calculation purpose
    
    printf(" \n Type exit after typing all the inputs \n");

    while(1)
    {
        printf(" \n Enter Number \n");
        scanf(" %5s", x);
         
        if(strcmp(x, "exit")==0 || strcmp(x, "EXIT")==0)
        {
            break;
        }
        else
        {
           z = atoi(x);
           if(x > 0)
           {
               a = a + z;
               num++; 
           }
        }
    }
    printf(" upper side of the equation : %d", a);
    printf(" lower side of the equation : %d", num);
    p = a / num;
    printf(" Average = %d", p);
}
