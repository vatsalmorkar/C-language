// Markes deviding

#include<stdio.h>

int main()
{
  int i; 
  int count[4] = {0, 0, 0, 0};
  int marks[10];
  
  printf(" Enter Marks of 10 students :");
  for(i=1 ; i<=10 ; i++)
  {
    scanf(" %d", &marks[i]);
  }

  printf(" GROUP \t RANGE \t \t FREQUENCY \t \n");
  for(i=1 ; i<=10 ; i++)
  {
    if(marks[i]<=30)
    {
      count[0]++;
    }
    if(marks[i]>30 && marks[i]<=70)
    {
      count[1]++;
    }
    if(marks[i]>70 && marks[i]<=100)
    {
      count[2]++;
    }
  }
  printf(" 1 \t 0 to 30 \t %d \n", count[0]);
  printf(" 2 \t 30 to 70 \t %d \n", count[1]);
  printf(" 3 \t 70 to 100 \t %d \n", count[2]);
}
