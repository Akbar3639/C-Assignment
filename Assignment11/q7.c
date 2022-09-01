//Write a function to print first N terms of Fibonacci series (TSRN)
#include <stdio.h>
void fibbo(int);
int main()
{
    int n;
    printf("Enter terms of fibonacci series = ");
    scanf("%d",&n);
    fibbo(n);

    return 0;
}
void fibbo(int x)
{
    int sum=0;
    int a=0;
    int b=1;
    printf("1 ");
    
        for(int i=1;i<x;i++)
        {
            sum=a+b;
            a=b;
            b=sum;
            printf(" %d ",sum);
        }

}
