#include <stdio.h>

int isSubset(int arr1[], int m, int arr2[], int n) {
    int i, j;

    for (i = 0; i < m; i++) {
        
        for (j = 0; j < n; j++) {
            if (arr1[i] == arr2[j]) {
                break; 
        }

        
        if (j == n) {
            return 0;
        }
    }

    return 1; 
    }
}


int main() {
    int m, n;

    
    printf("Enter the size of the first array: ");
    scanf("%d", &m);

    int arr1[m];

    
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    
    printf("Enter the size of the second array: ");
    scanf("%d", &n);

    int arr2[n];

    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

   
    if (isSubset(arr1, m, arr2, n)) 
    {
        printf("The first array is a subset of the second array.\n");
    } 
    else 
    {
        printf("The first array is not a subset of the second array.\n");
    }

    return 0;
}
