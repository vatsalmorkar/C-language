// Table Print LOL 

#include <stdio.h>

main()
{
    int a, b, c, e;
    b = 1;
    printf("Enter the number of table you want : ");
    scanf("%d", &a);

    for(e=1; e<=10; e++)
    {
        c = a * b;
        printf(" %d  x %d  = %d", a, b, c);
        printf(" \n");
        b++;
    }

}
