#include <stdio.h>

#define MAX_LENGTH 100

void concatenate_strings(char *str1, char *str2, char *result) {
    int i = 0, j = 0;

    while (str1[i] != '\0') {
        result[j] = str1[i];
        i++;
        j++;
    }

    i = 0;

    while (str2[i] != '\0') {
        result[j] = str2[i];
        i++;
        j++;
    }

    
    result[j] = '\0';
}

int main() {
    char str1[MAX_LENGTH], str2[MAX_LENGTH], concatenated[MAX_LENGTH * 2];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

   
    concatenate_strings(str1, str2, concatenated);

    printf("Concatenated string: %s\n", concatenated);

    return 0;
}
