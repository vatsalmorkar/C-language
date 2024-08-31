//count apfabets and count numbers
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char x[10];
    int count1, count2;
    
    while(1)
    {
        printf(" Type exit for exiting the program \n");
        printf("input string : \n");
        scanf("%10[^\n]", x);
        //printf(" %-10s",x);

        if (strcmp(x, "exit") == 0 || strcmp(x, "EXIT") == 0)
        {
            break;
        }
        else if (isdigit (x))
        {
            count2++;
        }
        else if (isalpha (x))
        {
            count1++;
        }
        printf(" DIGIT %d", count1);
        printf(" ALPHABET %d", count2);
    }
}
