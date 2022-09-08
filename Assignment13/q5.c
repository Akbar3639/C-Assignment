//Write a recursive function to calculate sum of digits of a given number
#include <stdio.h>
int sumD(int);
int main()
{
    int n;
    printf("Enter any number =");
    scanf("%d",&n);
    printf("sum of digits =%d",sumD(n));
    return 0;
}
int sumD(int n)
{
    if(n>0)
    {
       return sumD(n/10)+(n%10);
    }
}