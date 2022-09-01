//Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function
#include <stdio.h>
int fact(int);
int main()
{
    int n,sum=0;
    printf("Enter n term of series = ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+fact(i)/i;
    }

    printf("sum of series is %d",sum);

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