#include <stdio.h>
#include <math.h>
int main()
{
    int r, x, y, x1, y1;
    printf("Enter the coordinates of the center of the circle:- \n");
    scanf("%d %d", &x, &y);

    printf("Enter the co-ordinates of the point:- \n");
    scanf("%d %d", &x1, &y1);

    printf("Enter the Radius of the circle:- \n");
    scanf("%d", &r);

    if(pow(x - x1, 2) + pow(y - y1, 2) < pow(r, 2))
    {
        printf("The point lies inside the circle.\n");
    }
    else if(pow(x - x1, 2) + pow(y - y1, 2) > pow(r, 2))
    {
        printf("The point lies outside the circle.\n");
    }
    else
    {
        printf("The point lies on the circle.\n");
    }

    return 0;
}