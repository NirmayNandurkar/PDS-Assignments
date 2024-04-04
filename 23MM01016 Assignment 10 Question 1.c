#include <stdio.h>

union Data {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    union Data data;


    data.intValue = 10;
    printf("Integer value: %d\n", data.intValue);

    data.floatValue = 3.14;
    printf("Float value: %.2f\n", data.floatValue);

    data.charValue = 'A';
    printf("Character value: %c\n", data.charValue);

    return 0;
}
