#include <stdio.h.>

void circularshift(int *a, int *b, int *c)
{
    int temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}

int main()
{
    int a, b, c;
    printf("Enter 3 integers:- \n");
    scanf("%d %d %d", &a, &b, &c);

    printf("Original Order:- x = %d, y = %d, z = %d\n", a, b, c);

    circularshift(&a, &b, &c);

    printf("After circular shift:- x = %d, y = %d, z = %d\n", a, b, c);

    return 0;
}