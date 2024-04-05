#include <stdio.h>

void reverseArray(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1; 
    
    while (start < end) {
        
        int temp = *start;
        *start = *end;
        *end = temp;

        
        start++;
        end--;
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) 
    {
        printf("Enter element %d of the array:- \n", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Original array:- ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, size);

    printf("Reversed array:- ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}