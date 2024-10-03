// 2 dimetional basic program

#include<stdio.h>

int main()
{
  int dimention2 [4][3];
  int i, j;
  int sum=0, sum2=0, sum3=0;

  printf("\n Enter Value Raw Wise \n");
  printf("\n First Raw Is For the Total Amount Of Each Product Sold By The 1st Sales Girl \n");
  printf("\n Amount Preferances Item-1 [kurta] Item-2 [jense] Item-3 [onepis] \n");

  // for use input
  for(i=0 ; i<=3 ; i++)
  {
    for(j=0 ; j<=2 ; j++)
    {
      scanf(" %d", &dimention2[i][j]);
    }
  }
  printf(" \n \n");
  // calculating the amount of all product sold by each sales girl 
  for(i=0 ; i<=3 ; i++)
  {
    for(j=0 ; j<=2 ; j++)
    {
      sum = sum + dimention2[i][j];
    }
    printf(" Sale Girl %d = %d rs. \n", i+1, sum);
  }
  printf(" \n");
  // calculating total amount of each product sold
  for(j=0 ; j<= 2; j++)
  {
    for(i=0 ; i<=3 ; i++)
    {
      sum2 = sum2 + dimention2[i][j];
    }
    printf(" Item %d = %d rs.\n", j+1, sum2);
    sum3 = sum3 + sum2;
  }
  printf(" \n");
  printf(" Total sell of the product worth : %d rs.", sum3);
}
