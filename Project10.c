// Triangular Formula

#include <stdio.h>
#include <math.h>

int main()

{
    float s, a, b, c, area;
        
    printf("Enter Value for A :");
    scanf(" %f", &a);
  
    printf("Enter Value for B :");
    scanf(" %f", &b);

    printf("Enter Value for C :");
    scanf(" %f", &c);

        s = a + b + c;
        area = sqrt(s * (s-a) * (s-b) * (s-c) );

    printf(" area =  %2.2f", area);        


        
}