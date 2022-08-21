// check whether a given alphabet is in uppercase or lowercase
#include <stdio.h>
int main()
{
char ch;
    printf("Enter any alphabet = ");
    scanf("%c",&ch);
    if (ch>=65&&ch<=90)
    {
        printf("%c is a uppercase alphabet",ch);
    }
    else if (ch>=97&&ch<=122)
    {
        printf("%c is a lowercase alphabet",ch);
    }
    else
    {
        printf("enter any alphabet");
    }
    return 0;
}