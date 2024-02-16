#include <stdio.h>
int main()
{
    int n, digit;
    int sum = 0;
    printf("Enter any integer between 1 and 100 :- \n");
    scanf("%d", &n);

    if(n >= 1 && n <= 100){

    for(int i = 1; i < n; i++)
    {
        int div = n % i;
        if(div == 0)
        {
            sum += i;
        }
    }

    if(sum == n)
    {
        printf("The number is a perfect number.\n");
    }
    else
    {
        printf("The number is not a perfect number.\n");
    }
    }
    else
    {
        printf("Invalid Input limit.\n");
    }
    return 0;
}