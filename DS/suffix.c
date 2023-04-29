#include<stdio.h>
#include<string.h>
void main()
{
    char s[20];
    int l;
    printf("enter the string:");
    scanf("%s",&s);
    l=strlen(s);
    for(int i=l-1;i>=0;i--)
    {
        for(int j=i;j<=l;j++)
    {
          printf("%c",s[j]);
    }
    printf("\n");
    }

}

