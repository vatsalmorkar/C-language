// Ferenfit to celcious

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float func1 (float a);
float func2 (float a);

int main()
{
    char x[5];
    float z, y, p;

    printf("\n type exit for exiting the program \n");
    while(1)
    {
         printf("\n Enter what you want to convert \n");
         printf("\n For celcious to ferunheat Press = 1 \n");
         printf(" For ferunheat to celcious Press = 2 \n");
         scanf(" %5s", x);
      if(strcmp(x,"exit")==0)
      {
         printf("Exiting..");
         break;
      }        
      else
      {
         p = atoi(x);
         if(p == 2)
         {
         printf("Enter Ferunheat :");
         scanf(" %f", &z);
         y = func1 (z);
         printf(" %2.2f ferunheat is = %2.2f celcious \n", z, y);
         }
    
         if(p == 1)
         {
         printf("Enter celcious :");
         scanf(" %f", &z);
         y = func2 (z);
         printf(" %2.2f celcious is = %2.2f ferunheat \n", z, y);
      }
    }
   }
}

float func1 (float a)
{
   float b;
   b = (5 * a) - 32 / 9;
   return(b);
}

float func2 (float a)
{
   float b;
   b = (9 * a) / 5 + 32;
   return(b);
}
