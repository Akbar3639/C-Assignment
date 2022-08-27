//print N terms of the Fibonnaci series
#include <stdio.h>
int main()
{
    int sum=0,n;
    int a=0;
    int b=1;
    printf("Enter the nth value of fibonacci series=");
    scanf ("%d", &n);
    printf("1 ");
    
        for(int i=1;i<n;i++)
        {
            sum=a+b;
            a=b;
            b=sum;
            printf(" %d ",sum);
        }

    return 0;
}