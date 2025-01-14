// Print fibonaki series

#include<stdio.h>

int main()
{
  int a, x=0, y=1, z=1;
  printf("Enter number till you wanna fibonaki series : ");
  scanf(" %d", &a);
  for (int i=1 ; i<=a ; i++)
  {
    z = x + y;
    x = y;
    y = z;

    printf(" %d", x);
  }
}
