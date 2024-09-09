// Pay Slip Calculations with different level of emplyee

#include<stdio.h>
#include<string.h>
#define BASIC_SALARY 2500

int func1 (int conveyence, int entertainment);
float func2 (int g_salary, float tax_rate);

int main()
{
    char n[8], n1[20], n2[20]; // To store the name
    int l4;
    float l4_2;
    printf(" Enter Your Name :");
    scanf(" %8s %20s %20s", n, n1, n2);
    //printf(" %-8s %-20s %-20s", n, n1, n2);
    //printf(" %-8s %-.1s. %-20s", n, n1, n2);

    // For 4 level
    if(strcmp(n,"meet") == 0 || strcmp(n,"MEET") == 0)
    {
        int a=250, b=0;
        printf("\n You are  level 4 emplyee \n");
        // for total income
        l4 = func1 (a, b);
        printf(" \n Your Total income is : %d \n", l4);
        // for net income
        if(l4 <= 2000)
        {
            l4_2 = func2(l4, 1);
            printf(" \n Your Net income is : %.2f", l4_2);
        }
        else if (2000 < l4 <= 4000)
        {
            l4_2 = func2(l4, 0.30);
        }
    }   
}
int func1 (int conveyence, int entertainment)
    {
        int g_salary;
        g_salary = BASIC_SALARY + conveyence + entertainment;
        return(g_salary);
    }
float func2 (int g_salary, float tax_rate)
    {
        float net_income;
        net_income = g_salary - (g_salary * tax_rate);
        return(net_income);
    }
