#include <stdio.h>
int main()
{
    int r, h;
    const float pi = 3.14;

    printf("Enter the Radius and the Height of the Cylinder:- \n");
    scanf("%d %d", &r, &h);

    double V = pi * r * r * h;
    double SA = (2 * pi * r) * (r + h);

    printf("The Volume of the Cylinder is %0.2lf and the Surface Area is %0.2lf.\n", V, SA);

    return 0;


}