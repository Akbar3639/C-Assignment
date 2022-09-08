//Write a recursive function to calculate sum of first N odd natural numbers
#include <stdio.h>
int sumON(int);
int main()
{
    int x;
    printf("Enter number for sum = ");
    scanf("%d",&x);
    printf("sum = %d",sumON(x));
    
    return 0;
}
int sumON(int n)
{
    if(n>0)
    {
    
        return sumON(n-1)+(2*n-1);
    }
}