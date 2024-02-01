#include <stdio.h>

int main()
{
    int num,square,digits;
    printf("Enter the number");
    scanf("%d",&num);
    square=num*num;
    int temp=square;
    digits=0;
    while(temp>0){
        temp=temp/10;
        digits++;
    }
    printf("Digits:%d\n",digits);
    
    int divisor = 1;
    for (int i = 0; i < (digits/2); i++) {
        divisor *= 10;
    }
     if (digits % 2 != 0) {
        
        divisor *= 10;
    }
    printf("divisor:%d\n",divisor);
    int n1 = square / divisor;
    int n2 = square % divisor;

    if(n1+n2==num){
        printf("It is a Kaprekar Number.");
    }
        
    else{
        printf("It is not a Kaprekar Number");
    }
    return 0;




    





   


