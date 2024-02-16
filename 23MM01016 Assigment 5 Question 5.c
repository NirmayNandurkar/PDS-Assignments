#include <stdio.h>

int main()
{
    int num;
    char choice;

    int sum = 0;

    while(1)
    {
        printf("Enter a number :- \n");
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            sum += num;
        }

        printf("Do you want to continue (Y/N)?:- \n");
        scanf(" %c", &choice);

        if(choice == 'N' || choice == 'n')
        {
            break;
        }
        else if (choice != 'Y' && choice != 'y')
        {
            printf("Invalid input. Exiting the loop.\n");
            break;
        }
        
    }
    printf("The sum is %d", sum);

    return 0;
    
}