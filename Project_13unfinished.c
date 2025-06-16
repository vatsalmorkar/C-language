// Convert days in to months

#include <stdio.h>
#include <string.h>

int main ()
{
    int days, months, remaining_days;
    char leap[4]; // Enough for "YES" + '\0'

    printf("\nEnter days you want to convert into Years & Months: ");
    scanf("%d", &days);

    printf("\nIs it a leap year? YES / NO: ");
    scanf("%3s", leap);

    months = days / 30;
    remaining_days = days % 30;

    if (strcmp(leap, "NO") == 0 || strcmp(leap, "no") == 0) {
        printf("\nNon-leap year conversion:\n");
        printf("%d days = %d months and %d days\n", days, months, remaining_days);
    } else if (strcmp(leap, "YES") == 0 || strcmp(leap, "yes") == 0) {
        printf("\nLeap year conversion:\n");
        printf("%d days = %d months and %d days\n", days, months, remaining_days);
    } else {
        printf("\nInvalid input.\n");
    }
    return 0;
}
