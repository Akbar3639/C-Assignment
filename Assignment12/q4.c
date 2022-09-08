//Write a recursive function to print first N odd natural numbers in reverse order
#include <stdio.h>
void printORN(int);
int main()
{
    int n;
    printf("Enter n number = ");
    scanf("%d",&n);
    printORN(n);
    return 0;
}
void printORN(int n)
{
    if (n>0)
    {
    printf("%d ",2*n-1);
    printORN(n-1);
    
    }
}