#include <stdio.h>

int main() {
    int number;

    printf("Input a number:-\n");
    scanf("%d", &number);

    printf((number % 2 != 0 && number >= 100 && number <= 200) ? "True\n" : "False\n");

    return 0;
}
