// popularity table program

#include<stdio.h>

int main()
{
  int i,j;
  char array1[50][50];
  int count=0, count2=0, count3=0, count4=0;

  printf("For each person, enter the city code \n");
  printf("followed by the car code. \n");
  printf("Enter the letter X to indicate end \n");

  for(i=0 ; ; i++)
  {
    for(j=0 ; ; j++)
    {
      // printf(" Enter Value for array1 : ");
      scanf("%c", &array1[i][j]);
      if(array1[i][j] == 'x')
      {
        goto next;
      }
    }
  }

  next:
  printf("\n \t \t \t POPULARITY TABLE \t \t \n");
  printf("\n ----------------------------------------------------------- \n");
  printf("CITY \t AMBASSADOR \t FIAT  \t DOLPHOIN \t MARUTI \n");
  printf("------------------------------------------------------------ \n");

  for(i=0 ; i<=3 ; i++)
  {
    if(i==0)
    {
      printf("Bombey");
    }
    if(i==1)
    {
      printf("Calcutta");
    }
    if(i==2)
    {
      printf("Delhi");
    }
    if(i==3)
    {
      printf("Madras");
    }

    for(j=0 ; j<=3 ; j++)
    {
      if(i==0)
      {
        if(array1[0][j] == '1')
        count++;
        if(array1[0][j] == '2')
        count2++;
        if(array1[0][j] == '3')
        count3++;
        if(array1[0][j] == '4')
        count4++;
      }
      if(i==1)
      {
        if(array1[0][j] == '1')
        count++;
        if(array1[0][j] == '2')
        count2++;
        if(array1[0][j] == '3')
        count3++;
        if(array1[0][j] == '4')
        count4++;
      }
    }
    printf("\t %d \t %d \t %d \t %d \t", count, count2, count3, count4);
    printf("\n");
  }
printf("------------------------------------------------------------ \n");
}
