// insentive system

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int salary = 10000, incentive = 1500;
    int x; // to store the total salary
    char a[6];
    printf("Enter the gender :");
    scanf("%6s", a);
    if( strcmp(a,"female") == 0 || strcmp(a,"FEMALE") == 0)
    {
        x = salary + incentive;
    }
    else
    {
        x = salary;
    }
        printf(" Total salary is %d rs", x);

}
