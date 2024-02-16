#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,tag=0;
    char word[50];
    printf("Enter the number of characters you want:- \n");
    scanf("%d",&n);
    char arr[n],ch;
    for(i = 0;i < n; i++)
    {
        printf("Enter the character:- \n");
        scanf(" %c",&arr[i]);
    }
    printf("%d",i);
    for(i = 0;i < n; i++)
    printf("%c",arr[i]);
    printf("Enter the word to be made :\n");
    scanf("%s",&word);
    int length= strlen(word);
    for(i=0;i<length;i++)
    {
        for(j=0;j<n;j++)
        {
            if(word[i]==arr[j])
            {
                tag=1;
                break;
            }
            else
            tag=0;
        }
        if(tag==0)
        {
            printf("Word cannot be made");
            return 0;
        }
    }
    if(tag==1)
    printf("Word can be made from the given character array");
    return 0;
}