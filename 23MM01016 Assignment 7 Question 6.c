#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isSubstring(char str[], char substr[]) {
    return strstr(str, substr) != NULL;
}

int main() {
    char str[100], substr[100];

    printf("Enter a string:- \n");
    fgets(str, sizeof(str), stdin);

    
    if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }
    printf("Enter a substring to check:- \n");
    fgets(substr, sizeof(substr), stdin);

    
    if (substr[strlen(substr) - 1] == '\n')
    {
        substr[strlen(substr) - 1] = '\0';
    }
    if (isSubstring(str, substr))
    {
        printf("The substring is present in the string.\n");
    }
    else
    {
        printf("The substring is not present in the string.\n");
    }
    return 0;
}
