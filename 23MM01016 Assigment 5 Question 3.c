#include <stdio.h>
int main()
{
    int num;

    printf("Enter a 4 digit number :- \n");
    scanf("%d", &num);

    int digits[4];
    for(int i = 3; i >= 0; i--)
    {
        digits[i] = num % 10;
        num /= 10;
    }

    if (num < 1000 || num > 10000)
    {
        printf("Entered number is not a 4 digit number.");
    }
    else{

    
    for(int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
           if (i != j)
           {
            for(int k = 0; k < 4; k++)
            {
                if(j != k && i != k)
                {
                    int l = 6 - i - j - k;
                    printf("%d%d%d%d\n", digits[i], digits[j], digits[k], digits[l]);
                }
            }
           }
        }
    }
}
    

return 0;

}