//(nCr)Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
#include <stdio.h>
int fact(int);
int nCr(int,int);
int main()
{
    int n,r;
    printf("Enter the n items and r selected at a time = ");
    scanf("%d%d",&n,&r);
    printf("total  number of combination is  %d",nCr(n,r));

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
int nCr(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}