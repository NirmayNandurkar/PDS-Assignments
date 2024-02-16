#include <stdio.h>

void bubblesort(int array[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int array[10];

    printf("Enter 10 Integers:- \n");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }

    bubblesort(array, 10);

    for(int i = 0; i < 10; i++)
    {
    printf("%d ", array[i]);
    }

    return 0;
    
}