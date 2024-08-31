// Take input from the user in 1-12 month in integier formate and give the output in name of the month and the next month

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int a;
    printf("Enter the month in digits you want a speell for : \n");
    scanf(" %d", &a);

    switch(a)
    {
     case 1 :
              printf("JANUARY");
              break;
     case 2 :
              printf("FABRUARY");
              break;
    default :
              printf("Invelid Input");
    }

}