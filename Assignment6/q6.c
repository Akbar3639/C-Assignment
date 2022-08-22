//calculate factorial of a number
#include<stdio.h>
int main()
{
int n,f=1;
    printf("Enter the term for factorial = ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        f=f*i;
    }
    printf("Factorial of %d is %d",n,f);
    return 0;
}