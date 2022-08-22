//calculate sum of first N even natural numbers
#include <stdio.h>
int main()
{
    int n,s=0;
    printf("Enter number of term (n) = ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        s=s+2*i;
    }
    printf("sum of first %d even natural number is %d ",n,s);
    return 0;
}