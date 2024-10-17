// calculate the sum of all elements given in to the array

#include<stdio.h>

int main()
{
  int x, sum=0;
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
    sum += array1[i];
  }
  printf(" Array Sum =  %d", sum);
  return 0;
}
