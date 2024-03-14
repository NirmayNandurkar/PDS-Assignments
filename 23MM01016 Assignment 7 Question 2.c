#include <stdio.h>

int main()
{
    int i,j = 0;
    char str[100];

    printf("Enter a string:- \n");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("String after removing all non-alphabetical characters :- %s", str);

    return 0;
}