#include <stdio.h>

int isPrime(int n )
{
    int f = 0;
    for(int i = 1; i <n;i++)
    {
        if(n % i == 0)
        {
           f++;
           if(f > 1)
           {
            return 1;
           }
        
        }
    }

    return 0;
}

int main()
{
    int n;
    printf("Enter an Integer:- \n");
    scanf("%d", &n);

    for(int i = 1; i < n; i++)
    {
        int n1 = i, n2 = n - i;
        if(n1 == n2)
        {
            break;
        }
        
        if(isPrime(n1)&& isPrime(n2)){
            printf("%d %d\n", n1, n2);
        }
        
        

        
    }
}