// Program to print a reverse number

#include<stdio.h>

int main()
{
  int a, b=0, c;
  printf("Enter a Degit : ");
  scanf(" %d", &a);

  for (a ; a>0 ; )
  {
    c = a % 10;
    b = (b * 10) + c ;
    a = a / 10;
  }

  printf(" reverse number is %d", b);
}
