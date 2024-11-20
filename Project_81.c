// Find the difference between sum of even indices to the sum of elements at odd indecies

#include <stdio.h>

int main()
{
  int x=0, x2=0, y, count=0;

  printf("Howmany numbers you want to enter :");
  scanf(" %d", &y);
  int array1[y];
  
  printf(" Enter %d number followed by enter \n", y);
  for (int i=0 ; i<y ; i++)
  {
    scanf(" %d", &array1[i]);
  }  

  for (int i=0 ; i<y ; i++)
  {
    if (array1[i] % 2 == 0)
    {
      x += array1[i];
    }
    else
    {
      x2 += array1[i];
    }
  }
  printf(" even sum = %d \n", x);
  printf(" odd sum = %d \n", x2);
  printf(" Difference = %d", x - x2);
  //  printf("\n Total numbers which are bigger than %d are %d \n", x, count);

  return 0;
}
