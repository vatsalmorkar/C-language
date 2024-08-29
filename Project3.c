// Character print & not able to print multi charater [solved]
#include <stdio.h>

void main()
{
    char a, b, d;
    char x[80];

    printf("Enter Your First Name : \n");
    scanf(" %c", &a);

    printf("Enter Your Middle Name : \n");
    scanf(" %c", &b);
    
    printf("Enter Your Last Name : \n");
    scanf(" %c", &d);

    printf("Type a long line for x with space : ");
    scanf(" %80[^\n]", x);

    printf(" %c \n %c \n %c \n", a, b, d);

    printf(" %-80s", x);
}