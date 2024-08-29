//Use of the functions

//Basic Syntex
#include <stdio.h>

    int func1 (int a, int b)
     {
        int c;
        c = a + b;
        return (c);
     }

    int func2 (int a, int b)
     {
        int c;
        c = a - b;
        return (c);
     }
 
int main()
{
    
    printf("USE OF CALL FUNCTIONS \n");

    int x, y, z, b;
    
        printf("Enter Value for x \n");
        scanf("%d", &x);
        printf("x = %d \n", x);

        printf("Enter Value for y \n");
        scanf("%d", &y);
        printf("Y = %d \n", y);

        
    z = func1(x, y);
    b = func2(x, y);

    printf("The Ans Of z Plus = %d \n", z);
    printf("The Ans Of b Minus = %d \n", b);

}
/* #include <stdio.h>

    int func1 (int a, int b);
    int func2 (int a, int b);
     
int main()
{
    
    printf("USE OF CALL FUNCTIONS \n");

    int x, y, z, b;
    
        printf("Enter Value for x \n");
        scanf("%d", &x);
        printf("x = %d \n", x);

        printf("Enter Value for y \n");
        scanf("%d", &y);
        printf("Y = %d \n", y);

        
    z = func1(x, y);
    b = func2(x, y);

    printf("The Ans Of z Plus = %d \n", z);
    printf("The Ans Of b Minus = %d \n", b);

}
    int func1 (int a, int b)
     {
        int c;
        c = a + b;
        return (c);
     }

    int func2 (int a, int b)
     {
        int c;
        c = a - b;
        return (c);
     }
*/   

