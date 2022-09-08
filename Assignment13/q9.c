//Write a program in C to count the digits of a given number using recursion.
#include <stdio.h>
int countdigit(int);
int main()
{
    int n;
    printf("Enter any number = ");
    scanf("%d",&n);
    printf("total digits is %d ",countdigit(n));

    return 0;
}
int countdigit(int n)
{
    static int count=0;
    if(n>0)
    {
        countdigit(n/10);
       count++;  
    }
    return count;
}