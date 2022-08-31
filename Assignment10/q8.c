/*(nPr)Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)*/
#include <stdio.h>
int fact(int);
int nPr(int,int);
int main()
{
    int n,r;
    printf("Enter the n items and r selection = ");
    scanf("%d%d",&n,&r);
    printf("total number of arrangements %d",nPr(n,r));

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
int nPr(int n,int r)
{
    return fact(n)/fact(r);
}