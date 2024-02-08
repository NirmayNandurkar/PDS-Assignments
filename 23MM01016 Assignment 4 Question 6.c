#include <stdio.h>

int main() {
    
    int num1, num2;
    char operator;

    
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    
    switch (operator) {
        case '+':
            printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
           
            if (num2 != 0) {
                printf("Result: %d / %d = %.2lf\n", num1, num2, (double)num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
