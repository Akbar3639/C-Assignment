//Write a function to calculate the factorial of a number. (TSRS)
#include <stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter the value for factorial = ");
    scanf("%d",&n);
    printf("Factorial = %d",fact(n));

    return 0;
}
int fact(int x)
{
    int i,f=1;
    if (x==0)
    {
        return 1;
    }
    for (i=1;i<=x;i++)
    {
        f=f*i;
    }
    return f;
}