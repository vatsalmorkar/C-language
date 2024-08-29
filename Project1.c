//Interest Rate Calculator

// Basc Program
#include <stdio.h>
int main()
{
   
   printf("INTEREST RATE CALCULATION PROGRAM \n");
   
   int interestrate, amount, year;
   int a, amount2;
   a = 1;
   printf ("Enter in rate : \n");
   scanf ("%d", &interestrate);
   printf ("Interestrate = %d \n", interestrate);

   printf ("Enter in Amount : \n");
   scanf ("%d", &amount);
   printf ("Amount = %d \n", amount);

   printf ("Enter Year : \n");
   scanf ("%d", &year);
   printf ("Year = %d \n", year);

   while (a <= year)
   {
      amount2 = amount + interestrate * amount;
      printf("Year %d Total Amount %d \n", a, amount2);
      amount = amount2;
      a ++;
   }
   
}

/*
//2nd method
#include <stdio.h>
int main()
{
   
   printf("INTEREST RATE CALCULATION PROGRAM \n");
   
   int interestrate, amount=0, year;
   int a=1;
   
   printf ("Enter in rate : \n");
   scanf ("%d", &interestrate);

   printf ("Enter in Amount : \n");
   scanf ("%d", &amount);

   printf ("Enter Year : \n");
   scanf ("%d", &year);

   while (a <= year)
   {
      amount = amount + interestrate * amount;
      printf("Year %d Total Amount %d \n", a, amount2);
      a ++;
   }
   
}*/
