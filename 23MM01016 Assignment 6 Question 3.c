#include <stdio.h>

void reverseArray(int arr[], int start, int end) {
    if (start < end) {

        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        
        reverseArray(arr, start + 1, end - 1);
    }
}

int main() {
    int n;
 
    printf("Enter the size of the array:- \n");
    scanf("%d", &n);

    int myArray[n];

    for (int i = 0; i < n; i++)
    {
     printf("Enter element %d of the array:-\n", i + 1);
     scanf("%d", &myArray[i]);
        
    }

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", myArray[i]);
    }

    reverseArray(myArray, 0, n - 1);

    printf("\nReversed Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", myArray[i]);
    }

    return 0;
}
