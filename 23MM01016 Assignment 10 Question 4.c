#include <stdio.h>


union DataUnion {
    int intArray[5];
    float floatArray[5];
    char charArray[5];
};

int main() {
   
    union DataUnion data;

    for (int i = 0; i < 5; i++) 
    {
        printf("Enter element %d of Integer Array :- \n", i + 1);
        scanf("%d", &data.intArray[i]);
    }

    
    for (int i = 0; i < 5; i++) 
    {
        printf("Enter element %d of Float Array :- \n", i + 1);
        scanf("%f", &data.floatArray[i]);
    }

    
    for (int i = 0; i < 5; i++) 
    {
        printf("Enter element %d of Character Array :- \n", i + 1);
        scanf(" %c", &data.charArray[i]);
    }

    printf("\nInteger Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", data.intArray[i]);
    }
    printf("\n");

    printf("Float Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", data.floatArray[i]);
    }
    printf("\n");

    printf("Character Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%c ", data.charArray[i]);
    }
    printf("\n");

    return 0;
}
