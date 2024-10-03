// table program
// it will be fixed not flexible because of the array

#include<stdio.h>

int main()
{
  int i, j;
  int array1[5][5];

  for(i=1 ; i<=5; i++)
  {
    printf("     ");
    printf(" %d", i);
  }
  printf("\n ----------------------------- \n");

  for(i=0 ; i<5; i++)
  {
    printf(" %d |",i+1); 
    for(j=0 ; j<5 ; j++)
    {
      array1[i][j] = (i+1) * (j+1);
      printf("  %d  ", array1[i][j]);
    }
    printf("\n");
  }
}
