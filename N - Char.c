#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if (ch>=65&&ch<=90)
    {
        ch=tolower(ch);
        printf("%c\n",ch);
    }
    else
    {
        ch=toupper(ch);
        printf("%c\n",ch);
    }
    return 0;
}