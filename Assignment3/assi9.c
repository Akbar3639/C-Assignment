//find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
#include <stdio.h>
int main()
{
int a,b,c;
    printf("Enter any three number = ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>=b&&a>=c)
    {
        printf("%d is greatest number",a);
    }
    else if (b>=a&&b>=c)
    {
        printf("%d is greatest number",b);
    }
    else
    {
        printf("%d is greatest number",c);
    }
    
    return 0;
}