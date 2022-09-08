//Write a recursive function to print first N even natural numbers in reverse order
#include <stdio.h>
void printERN(int);
int main()
{
    int n;
    printf("Enter n number = ");
    scanf("%d",&n);
    printERN(n);
    return 0;
}
void printERN(int n)
{
    if (n>0)
    {
        printf("%d ",2*n);
    printERN(n-1);
    }
}