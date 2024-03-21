#include <stdio.h>

void reverse_array(int *arr, int size) {
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

void print_array(int *arr, int size) {
    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    print_array(arr, size);

    
    reverse_array(arr, size);

    print_array(arr, size);

    return 0;
}
