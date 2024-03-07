#include <stdio.h>

void printgreaternum(int arr[],int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum +=arr[i];
    }

    float avg = (sum / n);
    
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > avg)
        {
            printf("%d ", arr[i]);
        }
    }
}

int main()
{
    int n;
    printf("Enter the number of elements to be inserted in the array:- \n");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        printf("Enter element %d of the array:- \n", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The numbers which are greater than the average of the array are:- \n");

    printgreaternum(arr , n);

    return 0;
}