#include<stdio.h>
void main()
{
    int num,div,i,c=0;
    printf("Enter the dividend: ");
    scanf("%d",&num);
    printf("Enter the divisor: ");
    scanf("%d",&div);
    for(i=div;i<=num;i=i+div)
    c++;
    printf("Quotient= %d\n",c);
    printf("Remainder: %d",(num-i+div));

}