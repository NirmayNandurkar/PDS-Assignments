#include <stdio.h>
#include <math.h>

int main()
{
    int number, sum = 0;
    int digitno = 0;

    printf("Enter a number :- \n");
    scanf("%d", &number);

    int temp = number;

    while(temp != 0)
    {
        temp /= 10;
        digitno++;
    }
    temp = number;
    if (digitno == 3)
    {
        while(temp != 0){
        int digit = temp % 10;
        sum += pow(digit, 3);
        temp /= 10;
        }

        if(sum == number)
        {
            printf("The number is a Armstrong number.");
        }
        else
        {
            printf("The number is not an Armstrong number");
        }
    }
    else
    {
        printf("The entered number is not a 3 digit number");
    }
    
    return 0;


}