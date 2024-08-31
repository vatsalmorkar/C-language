#include <stdio.h>

int func1 (int a, int b, int c)
{
    int x;
    x = (b*b) - (4*a*c);
    return (x);
}
int main()
{
    int a, b, c;
    int x; // for calculation
    printf("Enter the value of a, b, c");
    scanf(" %d %d %d", &a, &b, &c);
    
    x = func1(a, b, c);

    if (a == 0 && b == 0)
    {
        printf(" Not Exist");
    }
    else if (x < 0)
    {
        printf(" There are no real roots");
    }

}