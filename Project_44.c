// Take input from the user in 1-12 month in integier formate and give the output in name of the month and the next month

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int a;
    printf("Enter the month in digits you want a spell for : ");
    scanf(" %d", &a);

    switch(a)
    {
     case 1 :
              printf("JANUARY");
              break;
     case 2 :
              printf("FABRUARY");
              break;
     case 3 :
              printf("MARCH");
              break;
     case 4 :
              printf("APRIL");
              break;
     case 5 :
              printf("MAY");
              break;
     case 6 :
              printf("JUNE");
              break;         
     case 7 :
              printf("JULY");
              break;         
     case 8 :
              printf("AUGUST");
              break;
     case 9 :
              printf("SEPEMBER");
              break;
     case 10 :
              printf("OCTOBER");
              break;          
     case 11 :
              printf("NOVEMBER");
              break;          
     case 12 :
              printf("DECEMBER");
              break;
    default :
              printf("Invelid Input");
    }

}
