#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter the three sides of the triangle:- \n");
    scanf("%d %d %d", &a, &b, &c);

    if((a + b) > c && (b + c) > a && (a + c) > b)
    {
        printf("The entered sides form a Triangle.\n");
    }
    else
    {
        printf("The entered sides do not form a Triangle.\n");
    }

    return 0;
}