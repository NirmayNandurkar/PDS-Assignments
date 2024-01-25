#include <stdio.h>
#include <math.h>
int main()
{
    double mealprice, tippercent, taxpercent;

    printf("Enter the meal price:- \n");
    scanf("%lf", &mealprice);

    printf("Enter the tip percentage:- \n");
    scanf("%lf", &tippercent);

    printf("Enter the Tax precentage:- \n");
    scanf("%lf", &taxpercent);

    double tip = mealprice * (tippercent / 100);
    double tax = mealprice * (taxpercent / 100);

    double bill = mealprice + tip + tax;

    int roundedbill = (int)round(bill);

    printf("The total bill is %d", roundedbill);

    return 0;
 
}