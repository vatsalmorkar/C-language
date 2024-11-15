// Count the number of elements in given array greater than a given number x.

#include <stdio.h>

int main()
{
  int x, y, count=0;

  printf("Howmany numbers you want to enter :");
  scanf(" %d", &y);
  int array1[y];
  
  printf(" Enter %d Number followed by enter \n", y);
  for (int i=0 ; i<y ; i++)
  {
    scanf(" %d", &array1[i]);
  }  

  printf("Enter the number from which you want to count the greater numbers : ");
  scanf(" %d", &x);

  for (int i=0 ; i<y ; i++)
  {
    if (array1[i] > x)
    {
      count++;
      printf(" %d is greter than %d \n", array1[i], x);
    }
  }
   printf("\n Total numbers which are bigger than %d are %d \n", x, count);

  return 0;
}
