//find the Nth term of the Fibonnaci series
#include <stdio.h>
int main()
{
    int sum=0,n;
    int a=0;
    int b=1;
    printf("Enter the nth value of fibonacci series=");
    scanf ("%d", &n);
    
        for(int i=1;i<n;i++)
        {
            sum=a+b;
            a=b;
            b=sum;
        }
     printf("%dth term of fibonnaci series is %d ",n,sum);

    return 0;
}