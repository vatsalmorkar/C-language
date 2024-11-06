// Changing the values in array

#include<stdio.h>
#include<limits.h>

int main()
{
  int x, y, z;
  printf(" \n Howmany values you want to enter in to the array \n");
  scanf("%d", &x);

  int array1[x];

  for(int i=0 ; i<x ; i++)
  {
    printf("Enter Value %d : ", i+1);
    scanf(" %d", &array1[i]);
  }

  for(int i=0 ; i<x ; i++)
  {
    y = array1[i]%2;
    if(y == 0)
    {
      z = array1[i] * 2;
    }
    else
    {
      z = array1[i]+1;
    }
    printf(" Value %d = %d \n", i+1, z);
  }
  return 0;
}
