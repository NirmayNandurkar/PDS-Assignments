#include <stdio.h>
int main()
{
    int x1, x2, x3, y1, y2, y3;

    printf("Enter the co-ordinates for the first point:- \n");
    scanf("%d %d", &x1, &y1);

    printf("Enter the co-ordinates for the second point:- \n");
    scanf("%d %d", &x2, &y2);

    printf("Enter the co-ordinates for the third point:- \n");
    scanf("%d %d", &x3, &y3);

    float slope1 = (y2 - y1) / (x2 - x1);
    float slope2 = (y3 - y2) / (x3 - x2);

    if (slope1 == slope2)
    {
        printf("The 3 points lie in a straight line.");
    }
    else
    {
        printf("The 3 points do not lie in a straight line.");
    }
   
    return 0;
}