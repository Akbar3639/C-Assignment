//Write a recursive function to print first N odd natural numbers
#include <stdio.h>
void printON(int);
int main()
{
    int n;
    printf("Enter n number = ");
    scanf("%d",&n);
    printON(n);
    return 0;
}
void printON(int n)
{
    if (n>0)
    {
    printON(n-1);
    printf("%d ",2*n-1);
    }
}