#include <stdio.h>

int main() {
    int number;

    
    printf("Enter an integer:-\n");
    scanf("%d", &number);

    
    if (number & 1) {
        printf("%d is an odd number.\n", number);
    } else {
        printf("%d is an even number.\n", number);
    }

    return 0;
}
