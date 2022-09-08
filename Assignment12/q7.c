//Write a recursive function to print squares of first N natural numbers
#include <stdio.h>
void printSN(int);
int main()
{
    int n;
    printf("Enter n number = ");
    scanf("%d",&n);
    printSN(n);
    return 0;
}
void printSN(int n)
{
    if (n>0)
    {
    printSN(n-1);
    printf("%d ",n*n);
    }
}