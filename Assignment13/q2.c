//Write a recursive function to calculate sum of first N even natural numbers
#include <stdio.h>
int sumEN(int);
int main()
{
    int x;
    printf("Enter number for sum = ");
    scanf("%d",&x);
    printf("sum = %d",sumEN(x));
    
    return 0;
}
int sumEN(int n)
{
    if(n>0)
    {
      return sumEN(n-1)+(2*n);
    }
}