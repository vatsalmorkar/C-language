// Array reverse print

#include<stdio.h>

int main()
{
  int array1[4];

  for( int i=0 ; i<4 ; i++)
  {
    printf("Enter Value");
    scanf(" %d", &array1[i]);
  }
  
  for(int i=3 ; i>=0 ; i--)
  {
    printf("%d", array1[i]);
  }
}
