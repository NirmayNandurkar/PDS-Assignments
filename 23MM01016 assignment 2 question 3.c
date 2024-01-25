#include <stdio.h>
int main ()
{
    int year, month, dayQ, week, dayA;

    printf("Enter number of days:- \n");
    scanf("%d", &dayQ);

    year = dayQ / 365;
    dayQ %= 365;

    month = dayQ / 12;
    dayQ %= 12;

    week = dayQ / 7;
    dayQ %= 7;

    dayA = dayQ % 7;

    printf("Years:- %d\n", year);
    printf("Months:- %d\n", month);
    printf("Weeks:- %d\n", week);
    printf("Days:- %d", dayA);
    return 0;

}