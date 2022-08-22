//calculate sum of first N natural numbers
#include <stdio.h>
int main()
{
int s=0,n;
    printf("Enter first n natural number =");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("Sum of first %d natural number = %d",n,s);
    return 0;
}