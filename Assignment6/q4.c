//calculate sum of squares first N natural numbers
#include <stdio.h>
int main()
{
    int n,s=0;
    printf("Enter number of term (n) = ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        s=s+i*i;
    }
    printf("sum of squares first %d natural number is %d ",n,s);
    return 0;
}