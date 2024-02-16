#include <stdio.h>
int main()
{
    int temp, num, digitno, sum;

    printf("Enter a number:- \n");
    scanf("%d", &num);

    temp = num;

    while(temp != 0)
    {
        temp /= 10;
        digitno++;
    }

    temp = num;

    while (temp != 0)
    {
        int digit = temp % 10;
        sum += digit;
        temp /= 10;

    }

    printf("The number of digits in the number %d are %d and the sum of all the digits is %d.", num, digitno, sum);
    return 0;

}