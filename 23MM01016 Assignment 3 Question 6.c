#include <stdio.h>
#include <math.h>

int main()
{
    int num, square, i, j, a, b, count = 0, div, sum = 0,c=0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    square = num * num;
    for (i = square; i > 0; i = i / 10)
    {
        count++;
    }
    for (j = 1; j <= count; j++)
    {
        div = (int)pow(10, j);
        a = square / div;
        b = square % div;
        sum = a + b;
        if (num == sum)
        {

            printf("%d is a Kaprekar number.\n", num);
        }
        else
        {
            c++;
        }
    }
    if(c!=0){
        printf("Not a Kaprekar number");
    }

    return 0;
}
