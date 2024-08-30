// Exam gifts distributions

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main()
{
    // p = science, q = maths, r = english
    int p = 10, q = 20, r = 100;
    char x[50];
    int a;

    printf("\n Type exit to End the program \n");
    printf("\n science - maths - english \n");
    
    while(1)
    {

    printf("\n Enter the exam name you have qualified :");
    scanf(" %50[^\n]", x);

        if(strcmp(x, "exit") == 0 || strcmp(x, "EXIT") == 0)
         {
           break;
         }
        else if (strcmp(x, "maths") == 0)
         {
            a = p;
            printf("\n Your Total Rewards = %d \n", a);
         }

        else if(strcmp(x,"science") == 0)
         {
            a = q;
            printf("\n Your Total Rewards = %d \n", a);
         }
         
        else if(strcmp(x,"english") == 0)
         {
            a = r;
            printf("\n Your Total Rewards = %d \n", a);
         }
        else if(strcmp(x, "maths science") == 0 || strcmp(x,"science maths") == 0)
        {
            a = p + q;
            printf("\n Your Total Rewards = %d \n", a);
        }
        else if(strcmp(x, "maths english") == 0 || strcmp(x, "english maths") == 0)
        {
            a = p + r;
            printf("\n Your Total Rewards = %d \n", a);
        }
        else if(strcmp(x, "science english") == 0 || strcmp(x, "english science") == 0)
        {
            a = q + r;
            printf("\n Your Total Rewards = %d \n", a);
        }
        else if(strcmp(x, "science english maths") == 0 || strcmp(x, "science maths english") == 0 || strcmp(x, "maths english science") == 0 || strcmp(x, "maths science english") == 0 || strcmp(x, "english maths science") == 0 || strcmp(x, "english science maths") == 0 )
        {
            a = p + q + r;
            printf("\n Your Total Rewards = %d \n", a);
        }
        else
        {
            printf("\n Enter Correct Input \n");
            //break;
        }
    }     
}