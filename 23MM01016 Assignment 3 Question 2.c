#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 numbers:- \n");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c)
    {
        printf("%d is the largest integer amongst the three.", a);
    }
    else if(a < b && b > c)
    {
        printf("%d is the largest integer amongst the three.", b);
    }
    else
    {
        printf("%d is the largest integer amongst the three.", c);
    }

    return 0;
    
}