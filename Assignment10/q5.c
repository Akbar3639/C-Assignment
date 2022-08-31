//Write a function to print first N odd natural numbers. (TSRN)
#include <stdio.h>
void printO(int);
int main()
{
    int n;
    printf("Enter last number (n) = ");
    scanf("%d",&n);
    printO(n);
    return 0;
}
void printO(int x)
{
    for (int i =1;i<=x;i+=2)
    {
        printf("%d ",i);
    }

}