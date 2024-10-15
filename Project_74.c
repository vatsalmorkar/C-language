// find the students who are fail in the exam with roll numbers

#include<stdio.h>

int main()
{
  int array1[10];
  int x;

  printf("\n Howmany roll number you want to enter : \n");
  scanf("%d", &x);

  for(int i=0 ; i<x ; i++)
  {
    printf("Enter Marks for roll number %d : ", i+1);
    scanf(" %d", &array1[i]);
  }
  for(int i=0 ; i<x ; i++)
  {
    if (array1[i]<35)
    {
      printf(" roll number %d is fail \n", array1[i]);
    }
  }

}
