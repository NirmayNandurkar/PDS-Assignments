#include <stdio.h>

int isPrime(int n)
{
    int div = 0;
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            div++;
        }
        if (div > 1)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int lowlim, uplim;
    printf("Enter the lower limit:- \n");
    scanf("%d", &lowlim);

    printf("Enter the upper limit:- \n");
    scanf("%d", &uplim);

    printf("The prime numbers between %d and %d are:-\n", lowlim, uplim);

    for(int i = lowlim; i <= uplim; i++)
    {
     if(isPrime(i))
     {
        printf("%d, ", i);
     }
    }
}