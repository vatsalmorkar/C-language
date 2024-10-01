// Hollow ractangle

#include<stdio.h>

int main()
{
  int i, j;

  for (i=1 ; i<=10 ; i++)
  {
    if(i == 1)
      {
      for (j=1 ; j<=10 ; j++)
        {
          printf(" * ");
        }
      }
    else if (i == 10)
     {
      for (j=1 ; j<=10 ; j++)
        {
          printf(" * ");
        }
     }
    else
     {
      for (j=1 ; j<=10 ; j++)
        {
          if( j == 1 )
          {
            printf(" * ");
          }
          else if (j == 10)
          {
            printf(" * ");
          }
          else
          {
            printf("   ");
          }
        }
      }
    printf(" \n");
  }
}
