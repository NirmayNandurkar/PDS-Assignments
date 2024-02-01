#include <stdio.h>
int main()
{
    int days;

    printf("Enter the number of days passed since the return date:- \n");
    scanf("%d", &days);

    if(days <= 5)
    {
        printf("The fine is 1 rupee.");
    }
    else if(days >= 6 && days <= 10)
    {
        printf("The fine is 2 rupees.");
    }
    else if(days >= 11 && days <= 30){
        printf("The fine is 5 rupees.");
    }
    else if(days > 30)
    {
        printf("Your membership is cancelled.");
    }
    return 0;
}