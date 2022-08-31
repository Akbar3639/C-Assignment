//Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
#include <stdio.h>
int check(int);
int main()
{
    int n;
    printf("Enter any number = ");
    scanf("%d",&n);
    printf("%d",check(n));

    return 0;
}

int check(int x)
{
    if (x%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}