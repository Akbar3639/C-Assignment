//Write a recursive function to calculate factorial of a given number
#include <stdio.h>
int fact(int);
int main()
{
    int x;
    printf("Enter any number for factorial = ");
    scanf("%d",&x);
    printf("factorial is %d",fact(x));

    return 0;
}
int fact(int n)
{
    if (n==0)
    return 1;
    return n*fact(n-1);

}