#include <stdio.h>
int main()
{
    int balance, creditscore;
    float interestrate;
    printf("Enter current balance:- \n");
    scanf("%d", &balance);

    printf("Enter credit score :- \n");
    scanf("%d", &creditscore);

    if(creditscore < 600)
    {
        interestrate = 0.15;
    }
    else if(creditscore >= 600 && creditscore <= 750)
    {
        interestrate = 0.12;
    }
    else if(creditscore > 750)
    {
        interestrate = 0.10;
    }

    double interest = balance * interestrate;

    printf("The interest is %0.2lf", interest);

    
}