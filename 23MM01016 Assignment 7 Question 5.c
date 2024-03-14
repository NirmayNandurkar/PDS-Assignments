#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char str[]) {
    int length = strlen(str);
    int start = 0, end = length - 1;

    while (start < end) {
        if (str[start] != str[end])
            return false;
        start++;
        end--;
    }
    return true;
}

int main() {
    char str[100];

    
    printf("Enter a string:- \n");
    fgets(str, sizeof(str), stdin);

   
    if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }
    if (isPalindrome(str))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
