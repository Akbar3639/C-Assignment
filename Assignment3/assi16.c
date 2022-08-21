//check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character
#include <stdio.h>
int main()
{
char ch;
    printf("Enter any key = ");
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
        printf("this is digit or a special character ");
    }
    return 0;
}