//is digit or is alphabet check
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char x[10];
    int count1, count2;
    
    while(1)
    {
        printf("input string : \n");
        scanf("%10s", x);
    
        if (strcmp(x, "exit") == 0 || strcmp(x, "EXIT") == 0)
        {
            break;
        }
        else if (isdigit (x[0]))
        {
            count1++;
        }
        else if (isalpha (x[0]))
        {
            count2++;
        }
    }
        printf("Total Digit Inputs are : %d \n", count1);
        printf("Total Alpha Inputs are : %d \n", count2-1);
        
}
