//check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number =");
    scanf("%d",&n);
    if(n%3==0&&n%2==0)
    {
        printf("%d is divisible by 3 and 2",n);
    }
    else
    {
        printf("%d is not divisible ",n);
    }
    return 0;
}