#include <stdio.h>
int main()
{
    int number;

    printf("Enter a number:- \n");
    scanf("%d", &number);

    if(number > 0)
    {
        printf("The entered number is Positive");
    }
    else if(number < 0)
    {
        printf("The entered number is Negative");
    }
    else
    {
        printf("The entered number is 0");
    }

    return 0;
    
}