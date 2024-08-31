// Another Math LOL Progam But Formatting

#include<stdio.h>

int main()
{
    int a, b;
    int x, y, z, z2, z3 ; // for store the value
    printf(" Enter Two values : ");
    scanf("%d %d", &a, &b);

    // Formating
    printf("          %d \n", a);
    printf("        x %d \n", b);
    printf("--------------- \n");

    x = b/10;
    z = x * a;
    // Formating
    printf(" %d x %d = %d \n", x, a, z);

    y = b - (x * 10);
    z2 = y * a;
    // Formating
    printf(" %d x %d = %d \n", y, a, z2);

    z3 = z + z2;
    // Formating
    printf("--------------- \n");
    printf("  Total = %d", z3);

}