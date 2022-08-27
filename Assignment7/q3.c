//whether a given number is there in the Fibonacci series or not.
#include <stdio.h>
int main()
{
    int sum=0,n;
    int a=0;
    int b=1;
    printf("Enter any number = ");
    scanf ("%d", &n);
        for(int i=1;1;i++)
        {
            sum=a+b;
            a=b;
            b=sum;
        
            if(sum==n)
            {
                printf("%d is found in fibonacci series",n);
                break;
            }
            if(sum>n)
            {
                printf("%d is not found",n);
                break;
            }
        }   

    return 0;
}