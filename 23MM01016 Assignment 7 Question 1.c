#include <stdio.h>

int main()
{
    char chr, word[100];
    int freq = 0;

    printf("Enter a word :- \n");
    fgets(word, sizeof(word), stdin);

    printf("Enter a character:- \n");
    scanf("%c", &chr);

    for(int i = 0; word[i] != '\0'; i++)
    {
        if(chr == word[i])
        {
            freq++;
        }
    }

    printf("The frequency of the character %c is %d", chr, freq);

    return 0;
}