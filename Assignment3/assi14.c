//check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number =");
    scanf("%d",&n);
    if(n%3==0||n%7==0)
    {
        printf("%d is divisible by 3 or 7",n);
    }
    else
    {
        printf("%d is not divisible ",n);
    }
    return 0;
}