// Find the maximum and minimum value from given array

#include<stdio.h>
#include<limits.h>

int main()
{
  int x, value1, max=INT_MIN, min=INT_MAX;
  printf(" \n Howmany values you want to enter in to the array \n");
  scanf("%d", &x);

  int array1[x+1];

  for(int i=0 ; i<x ; i++)
  {
    printf("Enter Value %d : ", i+1);
    scanf(" %d", &array1[i]);
  }

  for(int i=0 ; i<x ; i++)
  {
    if(array1[i]<min)
    {
      min = array1[i];
    }
    if(array1[i]>max)
    {
      max = array1[i];
    }
  }
  printf(" Min Value =  %d \n", min);
  printf(" Max Value =  %d", max);
  return 0;
}
