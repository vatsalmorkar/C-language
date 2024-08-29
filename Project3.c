// This can print charater with space also
#include <stdio.h>
#include <stdio.h>

int main()
{
    char x[80];
    char y[5];
    
    printf("Type a long line for x with space : ");
    scanf(" %80[^\n]", x);

    printf("Type a Word : ");
    scanf(" %5s", y);

    printf(" %-80s", x);
    printf(" %-5s", y);
}
