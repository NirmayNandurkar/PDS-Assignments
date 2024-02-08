#include <stdio.h>

int main()
{
    int x, y, z;
    int max;

    printf("Enter 3 Integers :- \n");
    scanf("%d %d %d", &x, &y, &z);

    if (x > y && x > z)
    {
        printf("%d is the largest integer of the three.\n", x);
    }
    if (y > x && y > z)
    {
        printf("%d is the largest integer of the three.\n", y);
    }
    if (z > y && x < z)
    {
        printf("%d is the largest integer of the three.\n", z);
    }

    return 0;


}