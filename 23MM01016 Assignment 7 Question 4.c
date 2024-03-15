#include <stdio.h>

int findLargest(int arr[], int n) {
    
    if (n == 1)
        return arr[0];
    
   
    int max = findLargest(arr + 1, n - 1);
    
   
    return (arr[0] > max) ? arr[0] : max;
}

int main() {
    int n;
    printf("Enter the number of elements in the array:- \n");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        printf("Enter element %d of the array:- \n",i + 1);
        scanf("%d", &arr[i]);
    }
    
    int largest = findLargest(arr, n);

    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
