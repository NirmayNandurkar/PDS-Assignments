#include <stdio.h>

struct DataStruct {
    int intValue1;
    int intValue2;
    char charValue;
};


union DataUnion {
    int intValue1;
    int intValue2;
    char charValue;
};

int main() {

    printf("Size of structure: %lu bytes\n", sizeof(struct DataStruct));

   
    printf("Size of union: %lu bytes\n", sizeof(union DataUnion));

    return 0;
}
