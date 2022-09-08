//Write a recursive function to print first N natural numbers
#include <stdio.h>
void printN(int);
int main()
{
    int n;
    printf("Enter n number = ");
    scanf("%d",&n);
    printN(n);
    return 0;
}
void printN(int n)
{
    if (n>0)
    {
    printN(n-1);
    printf("%d ",n);
    }
}