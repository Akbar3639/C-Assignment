//Write a function to print first N natural numbers (TSRN)
#include <stdio.h>
void printN(int);
int main()
{
    int n;
    printf("Enter last number (n) = ");
    scanf("%d",&n);
    printN(n);
    return 0;
}
void printN(int x)
{
    for (int i =1;i<=x;i++)
    {
        printf("%d ",i);
    }

}