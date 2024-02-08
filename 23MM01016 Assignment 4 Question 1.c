#include <stdio.h>
int main()
{
    int x;

    printf("Enter an Integer :- \n");
    scanf("%d", &x);

    switch(x % 2)
    {
        case 0:
        printf("The entered integer is an Even number.");
        break;

        case 1:
        printf("The entered integer is an Odd number.");
        break;
    }
    return 0;
}