//Write a recursive function to calculate sum of first N natural numbers
#include <stdio.h>
int sum(int);
int main()
{
    int x;
    printf("Enter number for sum = ");
    scanf("%d",&x);
    printf("sum = %d",sum(x));

    return 0;
}
int sum(int n)
{
    if(n>0)
    {
        return n+sum(n-1);
    }
}