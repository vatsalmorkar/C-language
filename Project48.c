// Loan Program for the employee'
// rule 1 : from privious 2 loans the first one should be cleared
// rule 2 : the total sum of the new loan and the privious one shold not be greather than the 50k

#include<stdio.h>
#include<ctype.h>
#define MAXLOANAMOUNT 50000

int main()
{
    long int loan1, loan2, loan3, totalloan, totalloan2;
    long int x; // for storing the value
    printf("Enter the privious 2 loan amounts : \n");
    scanf(" %ld %ld", &loan1, &loan2);
    printf("Enter the new loan amount you wanted : \n");
    scanf(" %ld", &loan3);
    
    totalloan = loan2 + loan3;
    totalloan2 = MAXLOANAMOUNT - loan2;
    x = (loan1 == 0)? ((totalloan <= MAXLOANAMOUNT) ? loan3 : totalloan2) : 0;

    /*if(loan1 == 0 && loan2 + loan3 <= MAXLOANAMOUNT)
    {
        x = MAXLOANAMOUNT - loan2;
        printf(" You can eligible for %ld rs. of loan \n", x);
    }
    else if (loan1 != 0)
    {
        printf(" You need to clear your first loan \n ");
    }
    else if (loan2 + loan3 > MAXLOANAMOUNT)
    {
        x = MAXLOANAMOUNT - loan2;
        printf(" You are only eligible for %ld rs. of loan \n", x);
    }*/

   printf(" You are only eligible for %ld rs. of loan \n", x);
}
