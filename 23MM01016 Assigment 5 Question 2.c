#include<stdio.h>
void main()
{
    int divi,divr,i,q=0, r;
    printf("Enter the dividend:- \n");
    scanf("%d",&divi);
    printf("Enter the divisor:- \n");
    scanf("%d",&divr);
    while(divi >= 0)
    {
        divi -= divr;
        q++;
        r = divi;
    }
    printf("Quotient :- %d\n",q);
    printf("Remainder :- %d",(r + divr));

    return 0;

}
