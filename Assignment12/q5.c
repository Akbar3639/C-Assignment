//Write a recursive function to print first N even natural numbers
#include <stdio.h>
void printEN(int);
int main()
{
    int n;
    printf("Enter n number = ");
    scanf("%d",&n);
    printEN(n);
    return 0;
}
void printEN(int n)
{
    if (n>0)
    {
    printEN(n-1);
    printf("%d ",2*n);
    }
}