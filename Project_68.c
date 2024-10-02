// Write a program using a single-subscripted variable to evaluate the following math function using one dimentional arrey

#include<stdio.h>

int main()
{
  int i;
  float total=0, x;
  float values[10];

  printf(" Enter 10 Values of x : \n");
  
  for( i=1 ; i<=10 ; i++)
  {
    scanf(" %f", &values[i]);
  }

  for( i=1 ; i<=10 ; i++)
  {
    printf(" x[ %d] = %.2f \n", i, values[i]);
    
    total += ( x * x);
  }  
  printf(" \n Total = %.2f", total);

}
